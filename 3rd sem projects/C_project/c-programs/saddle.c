#include<stdio.h>
main()
{
	int a[10][10],i,j,k,m,n,min,max,col;
	printf("\nENTER THE ORDER OF MATRIX:\n");
	scanf("%d %d",&m,&n);
	printf("\nENTER THE ELEMENTS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nTHE ELEMENTS ARE:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n   \n");
	}
	
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
				col=j;
			}
		}
		max=a[0][col];
		for(k=0;k<m;k++)
		{
			if(a[k][col]>=max)
			{
				max=a[k][col];
			}
		}
		if(max==min)
		printf("saddle pt.at (%d,%d)\n",i+1,col+1);
	}

}
