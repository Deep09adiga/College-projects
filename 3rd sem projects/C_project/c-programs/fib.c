#include<stdio.h>
main()
{
int a,i,b=0,c=1;
int r;
printf("ENTER THE NUMBER:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
r=b+c;
b=c;
c=r;
printf("%d",b);
}


}



