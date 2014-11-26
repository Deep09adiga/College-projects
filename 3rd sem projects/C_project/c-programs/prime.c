#include<stdio.h>
main()
{
int a,i;
printf("ENTER THE NUMBER:");
scanf("%d",&a);
for(i=0;i<=a-1;i++)
{
if(a%2==0)
{
printf("NUMBER IS NOT PRIME");
break;
}
else 

{
printf("THE NUMBER IS PRIME");
break;
}
}

}
