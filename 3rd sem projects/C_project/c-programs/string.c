#include<stdio.h>
main()
{
	char str[20];
	printf("\nENTER THE 1st STRING:\n");
	scanf("%s",str);
	printf("\nTHE 1st STRING IS :%s",str);	
	printf("\nENTER THE 2nd STRING:\n");
        gets(str);
	printf("\nTHE 2nd STRING IS :%s\n",gets(str));
}

