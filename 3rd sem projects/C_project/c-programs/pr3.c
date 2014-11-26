#include<stdio.h>
main()
{
double d1; 
long double d2;
float x=0.0,y=3.33,z=8.5;
x=2.25*y*z;
printf("X=%f\n",x);
d1=2.25*y*z;
printf("D1=%f\n",d1);
d2=2.25*y*z;
printf("D2=%Lf\n",d2);

}



