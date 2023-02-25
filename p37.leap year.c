//leap year prog
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("year is leap");
    }
    else
        printf("not leap year");
}
