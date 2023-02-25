//count number of digits
#include<stdio.h>
int main()
{
    int i,count=0,l,n;
//signed int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        l=n%10;
        n=n/10;
        count=count+1;
    }
    printf("%d",count);
}
