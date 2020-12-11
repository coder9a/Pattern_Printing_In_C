/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i,j,k,l,m,n,p;
    printf("Enter Columns\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(m=n;m>i;m--)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(k=1;k<=n-1;k++)
    {
        for(l=n-1;l>=k;l--)
        {
            printf("*");
        }
        for(p=1;p<=k;p++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

