#include<stdio.h>
int main()
{
    int a,k;
    printf("enter the number:");
    scanf("%d",&a);
    printf("enter bit position:");
    scanf("%d",&k);
    a=a|(1<<k);
    printf("%d",a);
}
