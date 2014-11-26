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
    f=fopen("user.txt","w");
    char user_id[20];
    char password[20];
	printf("\nEnter user ID :\n");
	scanf("%s",m.user_id);
	printf("\nEnter Password(within 5 to 20 charaters:\n");
	scanf("%s",m.password);
	fprintf(f,"%s\t%s\t",m.user_id,m.password);
	fprintf(stdout,"%s\t%s\t",m.user_id,m.password);
}
