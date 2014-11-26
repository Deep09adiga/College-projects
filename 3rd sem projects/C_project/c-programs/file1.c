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
	f=fopen(fn,"r");
	for(i=0;i<10;i++)
	{
		fscanf(f,"%s%s%d%f",s[i].name,s[i].reg,&s[i].sem,&s[i].marks);
		printf("\t%s\t%s\t\t\t%d\t\t%2f\n",s[i].name,s[i].reg,s[i].sem,s[i].marks);
	}
}
