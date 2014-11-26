#include<stdio.h>
main()
{
	char str[20];
	int l=0,i;
	printf("\nENTER THE STRING:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\nTHE LENGTH OF STRING IS :%d\n",l);

}	

