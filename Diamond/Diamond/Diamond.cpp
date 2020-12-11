#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p;
    printf("Enter Rows\n");
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
    printf("\n");
    }
    for(l=n-1;l>=1;l--)
    {
        for(m=n-1;m>=l;m--)
        {
            printf(" ");
        }
        for(p=1;p<=2*l-1;p++)
        {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
