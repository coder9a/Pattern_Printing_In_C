#include<stdio.h>
int main()
{
	int n;
	printf("Enter Rows\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<i;k++)
		{
			printf(" ");
		}
		for(int j=n;j>=i;j--)
		{
			if(i==j||i==1||j==n)
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
