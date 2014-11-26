#include<stdio.h>
main()
{
	int i,j;	
	char str1[20],str3[20];
	printf("\nENTER THE STRING:\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	
	printf("\nTHE COPIED STRING TO str3 :%s\n",str3);
}

	

