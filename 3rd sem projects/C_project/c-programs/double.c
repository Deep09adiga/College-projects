#include<stdio.h>
main()
{
	int a[20][20];4
	int i,j,m,n;
	printf("\nENTER THE ORDER OF ARRAY:\n");
	scanf("%d%d",&m,&n);
	printf("\nENETER THE ELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		
			
		
		}
	
	}
	printf("\nELEMENTS ARE:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\n",a[i][j]);		
		} 	
	}
}
