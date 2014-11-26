#include<stdio.h>

main()
{
	int a[100];
	int b[100];
	int sum[100];
	int i,n;
	printf("\nENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&n);
	printf("\nENETER THE ELEMENTS FOR ARRAY A:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	printf("\nENETER THE ELEMENTS FOR ARRAY B:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	
	}
	

	
	printf("\nADDITION OF TWO ARRAYS:\n");
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]+b[i];
		printf("\n%d\n",sum[i]);
	}
	
}
