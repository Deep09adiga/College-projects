#include<stdio.h>
#include<math.h>
 main()
{
	int a[10][10],sum=0,i,j,m,n,trace=0;
	float norm;
	printf("\nENTER ORDER:\n");
	scanf("%d %d",&m,&n);
	printf("\nENTER ELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+(a[i][j]*a[i][j]);
			if(i==j)
			trace=trace+a[i][j];
		}
		
	}
	norm=sqrt(sum);
	printf("NORM=%6.2f\n TRACE=%d\n",norm,trace);
	
}
