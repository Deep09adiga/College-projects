#include<stdio.h>
main()
{
int a,n,i,fact=1;
printf("ENTER THE NUMBER:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact=fact*i;
}
printf("FACTORIAL OF %d IS %d",a,fact);
}
