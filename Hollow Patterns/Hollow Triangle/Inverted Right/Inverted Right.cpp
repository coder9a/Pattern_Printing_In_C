#include<stdio.h>
int main()
{
	int n;
	printf("Enter Rows\n");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			if(i==n||j==1||i==j)
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
