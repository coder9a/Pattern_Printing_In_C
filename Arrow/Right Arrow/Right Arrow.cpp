#include<stdio.h>
int main()
{
    int i,j,k,l,n,m,p;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
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
    for(l=1;l<=n;l++)
    {
        for(m=l;m<n;m++)
        {
            printf(" ");
        }
        for(p=1;p<=l;p++)
        {
            printf("*");
        }
    printf("\n");
    }
}
