#include<stdio.h>
int main()
{
	int n;
	printf("Enter Rows\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int k=n;k>i;k--)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			if(i==j||i==1||i==n||j==1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
