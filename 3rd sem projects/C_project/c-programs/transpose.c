#include<stdio.h>
main()
{
	int a[10][10],b[10][10];
	int r,c,i,j;
	printf("\n ENTER THE ORDER OF MATRIX:\n");
	scanf("%d%d",&r,&c);
	printf("\n ENTER THE ELEMENTS OF MATRIX:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	printf("\nELEMENTS OF MATRIX ARE:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);
		printf("\n  \n");
		
	}
	printf("\nTHE TRANSPOSE OF MATIX IS:\n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
		{	
			b[i][j]=a[j][i];			
			printf("%d\t",b[i][j]);

		}
		printf("\n  \n");
	}
}

