#include<stdio.h>
struct student
{
	char name[20];
	char reg[20];
	int sem;
	float marks;
}s[10];
main()
{
	FILE *f;	
	int i,n;
	char fn[20];
	printf("\nENTER THE FILE NAME: \n");
	gets(fn);
	printf("\nENTER THE NUMBER OF STUDENTS YOU WANT TO ENTER: \n");
	scanf("%d",&n);
	f=fopen(fn,"w+");
	fprintf(f,"\tNAME\tREGISTER NO.\t\tSEM\t\tMARKS\n");
	fprintf(f,"\t____________________________________________________________\n");
	for(i=0;i<n;i++)
	{
		printf("\nENTER THE DETAIL OF STUDENT:%d\n",i+1);
		printf("\nENTER THE NAME:\n");
		scanf("%s",s[i].name);
		printf("\nENTER THE REGISTER NUMBER:\n");
		scanf("%s",s[i].reg);
		printf("\nENTER THE SEM:\n");
		scanf("%d",&s[i].sem);
		printf("\nENTER THE MARKS:\n");
		scanf("%f",&s[i].marks);
	fscanf(f,"%s%s%d%f",s[i].name,s[i].reg,&s[i].sem,&s[i].marks);
	fprintf(f,"\t%s\t%s\t\t\t%d\t\t%2f\n",s[i].name,s[i].reg,s[i].sem,s[i].marks);
	}
}
