#include<stdio.h>
main()
{
	char str[20],temp;
	int i,j,l,k;
	printf("\nENTER THE  1ST STRING:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
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
}
