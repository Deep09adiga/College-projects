#include<stdio.h>
#define test() printf("macro call");
int test();
main()
{
	test();
}
int test()
{
	printf("function call");
}
