//strong number chech
#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,i,l;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        l=n%10;
        sum=sum+l;
        mul=mul*l;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("strong");
    }
    else
        printf("not");
}
