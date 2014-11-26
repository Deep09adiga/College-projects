#include<stdio.h>
#include<math.h>
main()
{
float a,b,c,x1,x2,real,img;
printf("ENTER THE VALUE OF A:");
scanf("%f",&a);
printf("ENTER THE VALUE OF B:");
scanf("%f",&b);
printf("ENTER THE VALUE OF C:");
scanf("%f",&c);
d=b*b-(4*a*c);
if(d>=0)
{
ds=sqrt(d);
x1=
	








float a,b,c,x1,x2,d,dsq;
printf("ax^2 + bx + c = 0");
printf("\nEnter a,b,c separated by commas : \n");
scanf("%f,%f,%f",&a,&b,&c);
d = b*b-(4*a*c);
if(d>=0)
{
dsq=sqrt(d);
x1 = (-b+dsq)/(2*a);
x2 = (-b-(dsq))/(2*a);
printf("\nRoot 1 : %f\nRoot 2 : %f",x1,x2);
}
if(d<0)
{
d = ((4*a*c)-pow(b,2))/(2*a);
printf("\nRoot 1 : %f+%fi",((-b)/(2*a)),d);
printf("\nRoot 2 : %f-%fi",((-b)/(2*a)),d);}
