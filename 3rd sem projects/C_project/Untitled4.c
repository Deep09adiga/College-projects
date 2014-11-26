#include<stdio.h>
void main(){
    char a[20]="apple";
    char b[20]="app";
    printf("%d",!strcmp(a,b));
    if(!strcmp(a,b))
        printf("true");
    else
        printf("false");
/*    FILE *f;
    scanf("%s",a);
    if(!(strcmp(a,b)))
            f=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/Apple.txt","w");
    fprintf(f,"%s\n",a);*/
}
