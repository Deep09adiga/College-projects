#include<stdio.h>
main()
{
	char str[20];
	int i,l=0,c=0;
	printf("\nENTER THE STRING:\n");	
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<l;i++)
	{
		if(str[i]>='a'||str[i]<='z')
		{
			c++;
		}
	}
	printf("NUMBERS:%d",c);
}
