#include<stdio.h>
main()
{
	int n1,n2,x,y;
	printf("\nENTER TWO NUMBERS:\n");
	scanf("%d %d",&n1,&n2);
	x=n1,y=n2;
	while(n1!=n2)
	{
		if(n1>n2)
		  n1=n1-n2;
		else
		  n2=n2-n1;
	}
	printf("L.C.M=%d",x*y/n1);
}
