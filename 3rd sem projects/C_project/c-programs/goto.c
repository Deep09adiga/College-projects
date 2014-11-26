#include<stdio.h>
int add(int, int);
main()
{
	int a=5,b=6,s=0;
	BEGIN:add(a,b);
	printf("\nSUM=%d,\n",s);
	goto BEGIN;
	return;
}

int add(int n1, int n2)
{
	int i=0;
	LOOP:i++;
	printf("\n i=%d",i);
	goto LOOP;
	return(n1+n2);
}
