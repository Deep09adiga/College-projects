#include<stdio.h>
main()
{
	int a[10];
	int i,n;
	printf("\nENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&n);
	printf("\nENETER THE ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{	
			printf("THE SMALLEST VALUE IS :%d",a[i]);
		}
		else
		{
			printf("THE SMALLEST VALUE IS :%d",a[i]);
		}
	}
	
	//printf("\nELEMENTS ARE:\n");
	//for(i=0;i<n;i++)
	//{
	//	printf("\n%d\n",a[i]);
	//}
}
