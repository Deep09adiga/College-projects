#include<stdio.h>
main()
{
	int i,j,k=0;
	printf("\nENTER THE NUMBER\n");
	scanf("%d",&j);
	k=j;
	for(i=0;i<sizeof(j);i++)
	{	
		if(k==j)
		{	
			k++;	
		}
	}	
	printf("%d",k);
}
