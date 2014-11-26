#include<stdio.h>
#include<string.h>
main()
{
	int i=0,j=0;	
	char str1[20],str2[20],str3[20];
	printf("\nENTER THE  1ST STRING:\n");
	gets(str1);
	printf("\nENTER THE 2ND STRING:\n");
	gets(str2);
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("\nTHE CONCATINATED STRING IS :%s\n",str1);
}

	

