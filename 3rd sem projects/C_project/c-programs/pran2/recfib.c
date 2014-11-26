#include<stdio.h>
int fib(int);
main()
{
	int n,i=0,c;
	printf("\nENTER THE VALUE:\n");
	scanf("%d",&n);
	printf("\n THE FIBONACCI SERIES IS :\n");
	for(c=0;c<=n;c++)
	{
		printf("%d\n",fib(i));
		i++;
	}
}
int fib(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fib(n-1)+fib(n-2));
}
