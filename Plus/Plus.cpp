#include<stdio.h>
int main()
{
    int n;
    printf("Enter Rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
        	int mid=(1+n)/2;
        	if(i==mid|| j==mid)
        	{
        		printf(" *");
			}
			else
			{
				printf(" ");
			}
        }
    printf("\n");
    }
return 0;
}

