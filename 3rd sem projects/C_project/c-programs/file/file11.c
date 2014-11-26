#include<stdio.h>
main()
{
	FILE *fp;
	char fname[20];
	char c;
	printf("\nENTER THE FILE NAME:\n");
	gets(fname);
	fp=fopen(fname,"r");
	if(fp=='\0')
	{
		printf("\nCANNOT OPEN THE FILE\n");
	}
	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}	

}
