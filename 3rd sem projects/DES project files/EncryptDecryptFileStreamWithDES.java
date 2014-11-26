import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.FileWriter;
import java.io.FileNotFoundException;
import java.io.IOException;

import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.spec.AlgorithmParameterSpec;

import javax.crypto.Cipher;
import javax.crypto.CipherInputStream;
import javax.crypto.CipherOutputStream;
import javax.crypto.KeyGenerator;
import javax.crypto.NoSuchPaddingException;
import javax.crypto.SecretKey;
import javax.crypto.spec.IvParameterSpec;

public class EncryptDecryptFileStreamWithDES {

	private static Cipher ecipher;
	private static Cipher dcipher;

	// 8-byte initialization vector
	private static byte[] iv = {
		(byte)0xB2, (byte)0x12, (byte)0xD5, (byte)0xB2,
		(byte)0x44, (byte)0x21, (byte)0xC3, (byte)0xC3
    };

	public static void main(String[] args) {
		try {
			SecretKey key = KeyGenerator.getInstance("DES").generateKey();
			AlgorithmParameterSpec paramSpec = new IvParameterSpec(iv);
			ecipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
			dcipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
			ecipher.init(Cipher.ENCRYPT_MODE, key, paramSpec);
			dcipher.init(Cipher.DECRYPT_MODE, key, paramSpec);
         try {
            //create a buffered reader that connects to the console, we use it so we can read lines
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

            //read a line from the console
            String lineFromInput = in.readLine();
   
            //create an print writer for writing to a file
            PrintWriter out = new PrintWriter(new FileWriter("UserInput.txt"));
      
            //output to the file a line
            out.println(lineFromInput);
      
            out.close();
         }
         catch(IOException e1) {
           System.out.println("Error during reading/writing");
         }
			encrypt(new FileInputStream("UserInput.txt"), new FileOutputStream("encrypted.txt"));
			decrypt(new FileInputStream("encrypted.txt"), new FileOutputStream("decrypted.txt"));
		}
		catch (FileNotFoundException e) {
			System.out.println("File Not Found:" + e.getMessage());
			return;
		}
		catch (InvalidAlgorithmParameterException e) {
			System.out.println("Invalid Alogorithm Parameter:" + e.getMessage());
			return;
		}
		catch (NoSuchAlgorithmException e) {
			System.out.println("No Such Algorithm:" + e.getMessage());
			return;
		}
		catch (NoSuchPaddingException e) {
			System.out.println("No Such Padding:" + e.getMessage());
			return;
		}
		catch (InvalidKeyException e) {
			System.out.println("Invalid Key:" + e.getMessage());
			return;
		}
	}
	private static void encrypt(InputStream is, OutputStream os) {
		try {
			byte[] buf = new byte[1024];
			// bytes at this stream are first encoded
			os = new CipherOutputStream(os, ecipher);
			// read in the clear text and write to out to encrypt
			int numRead = 0;
			while ((numRead = is.read(buf)) >= 0) {
				os.write(buf, 0, numRead);
			}
			// close all streams
			os.close();
		}
		catch (IOException e) {
			System.out.println("I/O Error:" + e.getMessage());
		}
    }
	
   private static void decrypt(InputStream is, OutputStream os) {
		try {
			byte[] buf = new byte[1024];
			// bytes read from stream will be decrypted
			CipherInputStream cis = new CipherInputStream(is, dcipher);
			// read in the decrypted bytes and write the clear text to out
			int numRead = 0;
			while ((numRead = cis.read(buf)) >= 0) {
				os.write(buf, 0, numRead);
			}
			// close all streams
			cis.close();
			is.close();
			os.close();
		}
		catch (IOException e) {
			System.out.println("I/O Error:" + e.getMessage());
		}
    }
}