#include<stdio.h>
#include<ctype.h>
main()
{
	char str[20];
	int countv=0,i;
	int countc=0,n=0,s=0,c=0;
	int len=0;
	printf("\nENTER THE STRING:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			countv++;
		}
		else if(str[i]>='a'&& str[i]<='z') 
		{
			countc++;
		}
		else if(str[i]>='0'&&c<='9')
		{
			n++;
		}
		/*else if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			countv++;
		}
		else if(str[i]>='a'&& str[i]<='z') 
		{
			countc++;
		}*/
		else
		{
			s++;
		}	
	        
	}
	printf("\nNUMBER OF VOWELS:%d\n",countv);
	printf("\nNUMBER OF CONSONENTS:%d\n",countc);
	printf("\nNUMBER OF DIGITS:%d\n",n);
	printf("\nNUMBER OF SPECIAL CHARACTERS:%d\n",s);					

}

