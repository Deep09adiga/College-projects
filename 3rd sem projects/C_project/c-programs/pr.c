#include<stdio.h>
#define false 0;
#define true 1;
main()
{
int s=0,a=4,b=-5,c=8,d=2,i,k,l,m;
m=a+b*c/d-c;
/*i=b*c;
k=i/d;
l=a+k;
m=l-c;*/
if(m>0)
printf("TRUE ");
else
printf("FALSE ");
printf("%d\n",m);
l=a%d-(b-c)*a;
if(l>0)
printf("TRUE ");
else
printf("FALSE ");
printf("%d\n",l);
k=++a + --b+ ++d- --c;
if(k>0)
printf("TRUE ");
else
printf("FALSE ");
printf("%d\n",k);
i=((a+b)*c/d)&&(c-d);
if(i>0)
printf("TRUE ");
else
printf("FALSE ");
printf("%d\n",i);
}

