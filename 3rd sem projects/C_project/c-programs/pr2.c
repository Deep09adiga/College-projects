#include<stdio.h>
#define true b;
#define false c;
main()
{
int a,a1,s,s1;

a=(b&&c)||(b&&!c);
printf("a=%d\n",a);
s=((a>=c)&&(c>=b)||(a==b));
printf("s=%d\n",s);
s1=(!c)&&(!b);
printf("s1=%d\n",s1);
a1=((a==b)&&(!c==b));
printf("a1=%d\n",a1);
}
