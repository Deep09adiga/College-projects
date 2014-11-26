#include<stdio.h>
main()
{
	int a[10][10],b[10][10],d[10][10];
	int r1,c1,r2,c2,i,j,k;
	printf("\n ENTER THE ORDER OF MATRIX A:\n");
	scanf("%d%d",&r1,&c1);
	printf("\n ENTER THE ORDER OF MATRIX B:\n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("\n ENTER THE ELEMENTS OF MATRIX A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
		}
		printf("\n MATRIX A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			printf("%d\t",a[i][j]);
			printf("\n  \n");
		}
		printf("\nENTER THE ELEMENTS OF MATRIX B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
		}
	
		printf("\n MATRIX B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			printf("%d\t",b[i][j]);
			printf("\n  \n");
		}
		printf("\nTHE MULTIPLICATION OF MATRIX IS:\n");
		for(i=0;i<r1;i++)
		{	
		for(j=0;j<c1;j++)
		{	d[i][j]=0;
			d[i][j]=d[i][j]+a[i][j]*b[i][j];			
			printf("%d\t",d[i][j]);

		}
		printf("\n  \n");
	}
	}
	else
	{
		printf("\nMULTIPLICATION NOT POSSIBLE\n");
	}
		
}

