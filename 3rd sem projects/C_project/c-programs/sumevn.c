#include<stdio.h>
main()
{
	int n,i,sumeven=0;	
	printf("\nENTER THE NUMBER\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			sumeven=sumeven+i;
		}
	}
	printf("\nTHE SUM OF EVEN NUMBERS:%d\n",sumeven);
}
