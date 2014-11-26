#include<stdio.h>
main()
{
	int dn,r,q;
    	int bn[100],i=1,j;
	printf("\nENTER DECIMAL NUMBER:\n ");
	scanf("%d",&dn);
	q=dn;
	while(q!=0)
	{
		bn[i++]= q%2;
		q=q/2;
	}
	printf("EQUIVALENT BINARY CODE IS:");
	for(j=i-1;j>0;j--)
	{
		printf("%d",bn[j]);
	}
	printf("\n");
}
