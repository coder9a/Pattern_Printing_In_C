#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter Rows\n");
    scanf("%d",&n);
     for(i=1;i<n;i++)
    {
        for(k=n;k>=i;k--)
        {
            printf("*");
        }
    printf("\n");
    }
    for(j=1;j<=n;j++)
    {
        for(l=1;l<=j;l++)
        {
            printf("*");
        }
    printf("\n");
    }
}
