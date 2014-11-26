#include <stdio.h>
 
main()
{
int n,r=0,t;
printf("Enter a number:\n");
scanf("%d",&n);
t=n;
while(t!= 0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
 printf("\nREVERSE OF GIVEN NUMBER IS:%d\n",r);
}
