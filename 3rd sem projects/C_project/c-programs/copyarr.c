#include<stdio.h>

main()
{
	int a[20];
	int b[20];
	int i,n;
	printf("\nENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&n);
	printf("\nENETER THE ELEMENTS FOR ARRAY A:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	
	}
	printf("\nELEMENTS IN ARRAY B:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	
	}
	
}
