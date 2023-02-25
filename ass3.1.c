#include<stdio.h>
int main()
{
    int n,n1;
    printf("enter n:");
    scanf("%d",&n);
    n1=n;
    n1=n1&(1<<5);
    n=n&(1<<7);
    printf("5th bit is:  %d\n7th bit is: %d",n1,n);
}
