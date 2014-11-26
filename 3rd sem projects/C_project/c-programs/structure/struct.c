#include<stdio.h>
struct student
{
	char name[20];
	char reg[20];
	int sem;
	float marks;
}
main()
{
	struct student s;
	printf("\n******************INPUT*********************\n");	
	printf("\nENTER THE NAME OF THE STUDENT:\n");
	scanf("%s",s.name);
	printf("\nENTER THE REGISTER NUMBER:\n");
	scanf("%s",s.reg);
	printf("\nENTER THE SEM:\n");
	scanf("%d",&s.sem);
	printf("\nENTER THE MARKS:\n");
	scanf("%f",&s.marks);
	printf("\n\n");
	printf("\n******************OUTPUT*********************\n");
	printf("\nNAME OF THE STUDENT:%s",s.name);
	printf("\nREGISTER NUMBER:%s",s.reg);
	printf("\nSEM:%d",s.sem);
	printf("\nMARKS:%f\n",s.marks);
	

	
}
