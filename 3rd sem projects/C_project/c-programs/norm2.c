#include<stdio.h>
#include<math.h>
void calfun(int a[10][10],int n);
int main(void)
{
    int a[10][10],i,j,n;
    
    printf("\nEnter order of the matrix:\n");
    scanf("%d",&n);
    printf("\nEnter the elements of matrix:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    calfun(a,n);
    return;
}
void calfun(int a[10][10],int n)
{
   int i,j,trace=0,sum;
   float norm;
   for(i=0;i<n;i++)
   trace=trace+a[i][i];
   sum=0;
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   sum=sum+a[i][j]*a[i][j];
   norm=sqrt(sum);
   printf("\nTrace of the matrix is %d",trace);
   printf("\nNorm of the matrix is %6.2f",norm);
   return;
}
