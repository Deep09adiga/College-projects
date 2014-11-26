/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author USER
 */
   import java.io.*;
   import java.util.*;
   class EFile
   {
      FileWriter infile;
      BufferedWriter in;
      BufferedWriter im;
      EList l=new EList();
      public void fwrite1(ENode list)
      {
         ENode temp=list;
         try
         {
            infile=new FileWriter("employee.dat");
            in=new BufferedWriter(infile);
            in.write("");
            while(temp!=null)
            {
               in.append(temp.ename+" ");
               in.append("@ ");
               in.append(temp.id+" ");
               in.append("@ ");
               in.append(temp.dsgn+" ");
               in.append("@ ");
               in.append(temp.gndr+" ");
               in.append("@ ");
               in.append(""+temp.sal+" ");
               in.append("@ ");
               in.append(""+temp.yyyy+" ");
               in.append("@ ");
               in.append(""+temp.mm+" ");
               in.append("@ ");
               in.append(""+temp.dd+" ");
               in.append("@ ");
               in.append('\n');
               temp=temp.right;
            }
         }
            catch(IOException e)
            {
               System.out.println(e);
            }
      }
      public void fwrite2(ENode list)
      {
         ENode temp=list;
         try
         {
            infile=new FileWriter("nemployee.dat");
            im=new BufferedWriter(infile);
            im.write("");
            while(temp!=null)
            {
               im.append(temp.ename+" ");
               im.append("@ ");
               im.append(temp.id+" ");
               im.append("@ ");
               im.append(temp.dsgn+" ");
               im.append("@ ");
               im.append(temp.gndr+" ");
               im.append("@ ");
               im.append(""+temp.sal+" ");
               im.append("@ ");
               im.append(""+temp.yyyy+" ");
               im.append("@ ");
               im.append(""+temp.mm+" ");
               im.append("@ ");
               im.append(""+temp.dd+" ");
               im.append("@ ");
               im.append('\n');
               temp=temp.right;
            }
         }
            catch(IOException e)
            {
               System.out.println(e);
            }
      }
      public void done1()
      {
         try
         {
            in.close();
         }
            catch(IOException e)
            {
               System.out.println(e);
            }
      
      }
      public void done2()
      {
         try
         {
            im.close();
         }
            catch(IOException e)
            {
               System.out.println(e);
            }
      }
   }
