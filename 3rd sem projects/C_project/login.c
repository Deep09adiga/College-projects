#include<stdio.h>
#include<string.h>
struct admin_unames{
    char user_id[50];
    char password[20];
}admin_uname;
struct user_unames{
    char user_id[50];
    char password[20];
}user_uname;
int main(){
    int choice,n;
    printf("Login:\n1. Admin\n2. User\n3. Guest\n4: Exit\n");
    scanf("%d",&n);
    choice=login(n);
    printf("%d",choice);
    return 0;
}
int login(int n){
    int choice;
    switch(n){
        case 1: choice=admin_login();
                break;
        case 2: choice=user_login();
                break;
        case 3: choice=3;
                break;
        case 4: choice=4;
                break;
    }
    return choice;
}
int admin_login(){
    char user_id[50];
    char password[20];
    printf("Enter User-ID\n");
    scanf("%s",user_id);
    printf("Enter Password\n");
    scanf("%s",password);
    FILE *f;
    f=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/admin.txt","r");
    fscanf(f,"\n%s\t\t%s\n",admin_uname.user_id,admin_uname.password);
    if(strcmp(password,admin_uname.password)==0 && strcmp(user_id,admin_uname.user_id)==0)
        return 1;
    else
        return 10;
}
int user_login(){
    int i=0,n;
    char user_id[50];
    char password[20];
    int a,b;
    printf("Enter User-ID\n");
    scanf("%s",user_id);
    printf("Enter Password\n");
    scanf("%s",password);
    printf("%s\n",user_id);
    printf("%s\n",password);
    FILE *f;
    FILE *no_of_users;
    no_of_users=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/no_of_user.txt","r");
    fscanf(no_of_users,"\n%d\n",&n);
    fclose(no_of_users);
    for(i=0;i<n;i++){
      f=fopen("C:/Users/Deepak/Desktop/C_project/DataFiles/user.txt","r");
      fscanf(f,"\n%s\t\t%s\n",user_uname.user_id,user_uname.password);
      if(strcmp(password,user_uname.password)==0 && strcmp(user_id,user_uname.user_id)==0)
        return 2;
    fclose(f);
    return 10;
    }
}
