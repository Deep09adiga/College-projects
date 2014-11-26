#include<stdio.h>
main()
{
int a,b,c,l;
printf("\n**********INPUT***********\n");
printf("ENTER THE FIRST NUMBER\n");
scanf("%d",&a);
printf("ENTER THE SECOND NUMBER\n");
scanf("%d",&b);
printf("ENTER THE THIRD NUMBER\n");
scanf("%d",&c);
l=(a>b)?a:(b>c)?b:c;
printf("\n**********OUTPUT***********\n");
printf("\n LARGEST:%d\n",
l);
}

