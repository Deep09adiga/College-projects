#include<stdio.h>
int swap(int *,int *);
main()
{
	int a,b;
	int *p,*q;
	printf("ENTER THE VALUE OF A:\n");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF B:\n");
	scanf("%d",&b);
	p=&a;
	q=&b;	
	
	printf("BEFORE SWAP:\n A=%d \n B=%d\n",a,b);
	swap(&a,&b);
	printf("AFTER SWAP:\n  A=%d \n B=%d\n",a,b);
}

int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
