#include<stdio.h>
int main()
{
    int n,n1=1;
    scanf("%d",&n);
    while(n>0)
    {
        n1=n1*n;;
        n--;
    }
    printf("%d",n1);
}
