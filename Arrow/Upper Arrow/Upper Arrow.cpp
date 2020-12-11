#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("*");
        }
        for(k=1;k<2*i-1;k++)
        {
            printf(" ");
        }
        for(l=5;l>=i;l--)
        {
        	printf("*");
		}
    printf("\n");
    }
return 0;
}


// Now make boundary outside it

