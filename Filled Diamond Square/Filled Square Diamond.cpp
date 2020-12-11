#include<stdio.h>
int main()
{
    int n;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf("*");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("-");
        }
        for(int l=5;l>i;l--)
        {
        	printf("*");
		}
    printf("\n");
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>i;j--)
        {
            printf("*");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(i==n)
            {
            	goto x;
			}
			else
			{
				printf("-");
			}
        }
        x:
        for(int l=n;l>i;l--)
        {
            printf("*");
        }
    if(i!=n)
    {
    	printf("\n");
	}
    }
return 0;
}

