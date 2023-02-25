#include<stdio.h>
int main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    n=n&1;
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
            printf("%d is power of 2",n);
        }
        else
        {
            printf("%d is not power of 2",n);
        }
    }
}
