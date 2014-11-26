#include<stdio.h>
int add(int *, int);
main()
{
	int a[10],sum=0,n,i;
	int *p[10];
	printf("ENTER THE ARRAY SIZE:\n");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	sum=add(a,n);
	printf("SUM IS : %d",sum);
}
int add(int *p, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(*p);
		p++;
	}
	return sum;
}
	
