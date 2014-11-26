#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n;
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

