#include<stdio.h>
main()
{
	int a[10][10],b[10][10],d[10][10];
	int r,c,i,j;
	printf("\n ENTER THE ORDER OF MATRIX:\n");
	scanf("%d%d",&r,&c);
	printf("\n ENTER THE ELEMENTS OF MATRIX A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\n MATRIX A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);
		printf("\n  \n");
	}
	printf("\nENTER THE ELEMENTS OF MATRIX B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&b[i][j]);
		
		
	}
	
	printf("\n MATRIX B:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",b[i][j]);
		printf("\n  \n");
	}
	printf("\nTHE ADDITION OF MATRIX IS:\n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{	
			d[i][j]=a[i][j]+b[i[j];			
			printf("%d\t",d[i][j]);

		}
		printf("\n  \n");
	}
}

