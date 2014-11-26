#include<stdio.h>
int factr(int);
main()
{
	int n,fact;
	printf("\nENTER THE NUMBER:\n");
	scanf("%d",&n);
	fact=factr(n);
	printf("\n FACTORIAL OF %d IS %d\n",n,fact);
}
int factr(int n)
{
	if((n==0)||(n==1))
	return 1;
	else
	return(n*factr(n-1));
}
