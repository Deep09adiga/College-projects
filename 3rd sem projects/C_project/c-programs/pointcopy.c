#include<stdio.h>
int copy1(int *);
main()
{
	int a[10],b[10],copy=0,n,i;
	int *p[10];
	printf("ENTER THE ARRAY SIZE:\n");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=copy1(a);
		printf("ELEMENTS IN ARRAY B ARE : %d\n",b[i]);
	}
}
int copy1(int *p)
{
	int  b[10],i,sum=0;
	for(i=0;i<4 ;i++)
	{
		b[i]=*p;
		p++;
		return b[i];
		
	}
	
}
	
