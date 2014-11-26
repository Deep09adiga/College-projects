#include<stdio.h>
typedef struct student
{
	char name[20];
	int roll;
	float marks;
}student;
//struct student display(struct student *n);
void main(void)
{
	student s,sa[10],*sp;
	int a;
	a=sizeof(s);
	printf("\nSIZE OF S IS :%d\n",a);
	//a=sizeof(*s);
	//printf("\nSIZE OF *S IS :%d\n",a);
	a=sizeof(sa);
	printf("\nSIZE OF SA IS :%d\n",a);
	a=sizeof(*sa);
	printf("\nSIZE OF *SA IS :%d\n",a);
	a=sizeof(*sp);
	printf("\nSIZE OF *SP IS :%d\n",a);
	a=sizeof(sp);
	printf("\nSIZE OF SP IS :%d\n",a);	
	printf("\nENTER THE DETAILS:\n");
	scanf("%s%d%f",s.name,&s.roll,&s.marks);
	printf("\nSTUDENT NAME= %s \nROLL NO= %d\n MARKS= %f\n",s.name,s.roll,s.marks);
	//s.marks=display(&s);
}
//struct student display(struct student *n)
//{
//	 n->marks+=3;	
//	printf("STUDENT NAME=%s \nROLL NO=%d\n MARKS=%f\n",n->name,n->roll,n->marks);
//	return n.marks;
//}
