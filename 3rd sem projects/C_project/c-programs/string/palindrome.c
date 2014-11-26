#include<stdio.h>
main()
{
	char str[20],str1[20],temp;
	int i,j,l,k,c=0;
	printf("\nENTER THE  1ST STRING:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<l;i++)
	{
		str1[i]=str[i];
	}
	k=0;
	j=l-1;
	 while(k<j)
    	 {
     		temp=str[k];
     		str[k]=str[j];
     		str[j]=temp;
     		k++;
     		j--;
     	 }
 	 printf("\nREVERSE OF GIVEN NUMBER IS:%s\n",str);
	for(i=0;i<l;i++)
	{
		if(str1[i]==str[i])
		{
			c++;
		}
		else
		{
			printf("THE STRING IS NOT PALINDROME\n");
			 return;
		}
	}
	if(c==l)
	{
		printf("STRING IS PALINDROME\n");
		return;
	}
}

