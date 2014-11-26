#include<stdio.h>
main()
{
	int a[20][20];
	int i,j,m,n,sum=0;
	int avg;
	int g;
	printf("\nENTER THE ORDER OF ARRAY:\n");
	scanf("%d%d",&m,&n);
	g=m+n;
	printf("\nENETER THE ELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
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
		
		printf("THE SUM OF ARRAY:%d\n",sum);
		avg=sum/g;
		printf("\nTHE AVERAGE OF ARRAY:%d\n",avg);
		
}		

