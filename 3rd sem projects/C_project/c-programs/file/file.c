#include<stdio.h>
main()
{
	FILE *fp;
	char fname[20];
	char c;
	printf("\nENTER THE FILE NAME:\n");
	gets(fname);
	fp=fopen(fname,"w+");
	if(fp=='\0')
	{
		printf("\nCANNOT OPEN THE FILE\n");
	}
	else
	{
		printf("ENTER THE CONTENT:");
		while((c=getchar())!=EOF)
		{
			fputc(c,fp);
		}
		while((c=fgetc(fp))!=EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}	

}
