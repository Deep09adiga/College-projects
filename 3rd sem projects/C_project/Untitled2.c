#include<stdio.h>
#include<string.h>
int main(){
    char a[20];
    char b[20];
    printf("Enter 1st string\n");
    scanf("%s",a);
    printf("Enter 2nd string\n");
    scanf("%s",b);
    if(a==b)
        printf("True");
    else
        printf("False");
    return 0;
}
