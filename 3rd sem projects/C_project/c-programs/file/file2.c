#include<stdio.h>
main()
{
	FILE *fp;
	char fname[20];
	char name[20];
	int roll;
	float marks;
	printf("\nENTER THE FILE NAME:\n");
	gets(fname);
	fp=fopen(fname,"w+");
	printf("\nENTER THE NAME OF STUDENT:\n");
	scanf("%s",name);
	printf("\nENTER THE ROLL NUMBER:\n");
	scanf("%d",&roll);
	printf("\nENTER THE MARKS:\n");
	scanf("%f",&marks);
	fprintf(fp,"\n\tNAME\tROLL NUMBER\tMARKS\n");
	fscanf(fp,"\t%s\t%d\t\t%f",name,&roll,&marks);
	fprintf(fp,"\t%s\t%d\t\t%f",name,roll,marks);
	fclose(fp);
	printf("\nCONTENTS OF FILE ARE:\n");
	printf("\nNAME\tROLL NO\tMARKS\n");
	//fscanf(fp,"\t%s\t%d\t\t%f",name,&roll,&marks);
	printf("%s\t%d\t%f\n",name,roll,marks);
}
