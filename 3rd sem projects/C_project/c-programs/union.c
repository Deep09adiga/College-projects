#include<stdio.h>
union student
{
	char name[20];
	int roll;
	float marks;
};
main()
{
	union student u;
	int a;
	printf("ENTER THE NAME:");
	scanf("%s",u.name);
	u.roll=123;
	u.marks=45.0;
	a=sizeof(u);
	printf("\nSIZE OF U:%d",a);
	a=sizeof(u.name);
	printf("\nSIZE OF U.NAME:%d\n",a);
	a=sizeof(u.roll);
	printf("\nSIZE OF U.ROLL:%d\n",a);
	a=sizeof(u.marks);
	printf("\nSIZE OF U.MARKS:%d\n",a);
	printf("\nNAME:%s",u.name);
	printf("\nROLL:%d",u.roll);
	printf("\nMARKS:%f",u.marks);
	
}
