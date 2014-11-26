#include<stdio.h>
main()
{
	int a[20][20];
	int i,j,m,n,sum1=0,sum2=0;
	printf("\nENTER THE ORDER OF ARRAY:\n");
	scanf("%d%d",&m,&n);
	printf("\nENTER THE ELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
	printf("\nELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
	printf("\n \n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum1+=a[i][j];
		}
		printf("THE SUM OF ROW:%d\n",sum1);
		printf("THE SUM OF COLUMN:%d\n",sum1);
	}
}		

