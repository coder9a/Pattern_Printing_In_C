#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=n;k>=i;k--)
        {
            printf("*");
        }
    printf("\n");
    }
}
