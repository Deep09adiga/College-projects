#include<stdio.h>
main()
{
	int a[10];
	int i,n,key,count=0;
	printf("\nENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&n);
	printf("\nENETER THE ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("\nENTER THE KEY ELEMENT THAT TO BE SEARCHED:\n");
	scanf("%d",&key);
	
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("\nTHE KEY ELEMENT %d IS FOUND AT %d POSITION\n",key,i);
			break;
		}
		else
		{
			count++;
		}
	
		if(count==n)
		printf("\nKEY ELEMENT NOT FOUND IN THE ARRAY\n");			
		
	}
	
}
