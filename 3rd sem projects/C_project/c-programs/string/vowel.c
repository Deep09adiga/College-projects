#include<stdio.h>
main()
{
	char str[20];
	int countv=0,i;
	int countc=0;
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
		else
		{
			countc++;
		}
	        
	}
	printf("\nNUMBER OF VOWELS:%d\n",countv);
	printf("\nNUMBER OF CONSONENTS:%d\n",countc);

}

