#include<stdio.h>

main()
{
	int a[20];
	int b[20];
	int i,j,n,temp[20];
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
	printf("\nELEMENTS IN ARRAY C:\n");
	for(i=0;i<n;i++)
	{
		temp[i]=a[i];
		a[i]=b[i];
		printf("%d\n",temp[i]);
		printf("%d\n",a[i]);
	}
	
	
}
