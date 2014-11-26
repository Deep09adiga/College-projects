#include<stdio.h>
int sum(int, int);
main()
{
int a=2,b=3,s=0;
s=sum(a,b);
printf("SUM=%d",s);
}
int sum(int n1, int n2)
{
	int c;
	c=n1+n2;
	return (c,n1++,n2++);
}


