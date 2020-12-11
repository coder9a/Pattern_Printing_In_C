#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,p;
    printf("Enter Columns\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(m=n;m>i;m--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=n-1;k++)
    {
        for(p=1;p<=k;p++)
        {
            printf(" ");
        }
        for(l=n-1;l>=k;l--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

