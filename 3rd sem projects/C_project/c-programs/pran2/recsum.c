#include<stdio.h>
int nsum(int);
main()
{
	int n,sum;
	printf("\nENTER THE VALUE:\n");
	scanf("%d",&n);
	sum=nsum(n);
	printf("\n THE SUM IS :%d\n",sum);
}
int nsum(int n)
{
	if(n==1)
	return 1;
	else
	return(n+nsum(n-1));
}
