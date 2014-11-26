#include<stdio.h>
main()
{
	char str[20],str1[20];
	int i,l,l1,c=0;
	printf("\nENTER THE  1ST STRING:\n");
	gets(str);
	printf("\nENTER THE 2ND STRING:\n");
	gets(str1);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		l1++;
	}
	for(i=0;str[i]!='\0'||str1[i]!='\0';i++)
	{
		if(str[i]==str1[i])
		{
			c++;
		}
	}
	if(c==l||c==l1)
	{
		printf("THE STRINGS ARE SAME\n");
	}
	else
	{
		printf("THE STRINGS ARE DIFFERENT\n");
	}
}	
