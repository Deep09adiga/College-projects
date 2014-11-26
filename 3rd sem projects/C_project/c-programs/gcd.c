#include<stdio.h>
main()
{
	int n1,n2;
	printf("\nENTER TWO NUMBERS:\n");
	scanf("%d %d",&n1,&n2);
	while(n1!=n2)
	{
		if(n1>=n2-1)
		 n1=n1-n2;
		else
		 n2=n2-n1;
	}
	printf("\nGCD OF A GIVEN NUMBER=%d",n1);
}


