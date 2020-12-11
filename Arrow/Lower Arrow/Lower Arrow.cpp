#include<stdio.h>
int main()
{
    int i,j,k,n,l;
    printf("Enter Columns\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        for(k=1;k<2*i-1;k++)
        {
            printf(" ");
        }
        for(l=n;l>=i;l--)
        {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
