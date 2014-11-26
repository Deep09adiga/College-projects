#include<stdio.h>
struct Mobile
{
		char user_id[50];
		char password[20];
}m;
main()
{
    int i=1;
    FILE*f;
    f=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/user.txt","r");
    char user_id[20];
    char password[20];
	printf("\nEnter user ID :\n");
	scanf("%s",user_id);
	printf("\nEnter Password(within 5 to 20 charaters:\n");
	scanf("%s",password);
	while(f!=EOF){
        fscanf(f,"%s\t%s\t",m.user_id,m.password);
        printf("User ID=%d\nPassword=%d",m.user_id,m.password);
	}
	if(user_id==m.user_id && password==m.password)
        printf("matched");
    else
        printf("Not matched");
    fclose(f);
}
