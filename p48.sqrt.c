//finding squre root of a number
#include<stdio.h>
int main()
{
   int n,i;
    //float i,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
            printf("%d",i);
        }
    }
}
