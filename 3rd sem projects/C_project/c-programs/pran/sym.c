#include<stdio.h>
main()
{
    int a[10][10],b[10][10],k,i,j,m,n;
    printf("\nENTER THE ORDER OF MATRIX:\n");
    scanf("%d %d",&m,&n);
    printf("\nENTER THE ELEMENTS:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    
    printf("\nELEMENTS ARE:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
	    printf("\n  \n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            b[i][j]=a[j][i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]!=a[i][j])
                k=1;
        }
    }
    if(k==1)
        printf("THE MATRIX IS NOT SYMMETRIC\n");
    else
        printf("THE MATRIX IS SYMMETRIC\n");
   
}
