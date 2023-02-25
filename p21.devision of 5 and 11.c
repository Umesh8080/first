//divission of 5 and 11
#include<stdio.h>
main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%5==0&&n%11==0)
        printf("%d divide by both 5 and 11",n);
    else if(n%5==0)
        printf("%d devide by 5",n);
    else if(n%11==0)
        printf("%d devide by 11",n);
    else
        printf("number is not divided by both 5 and 11");
}
