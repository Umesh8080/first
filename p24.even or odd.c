//even or odd number without modules
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if((n/2)*2==n)
    {
        printf("number is even");
    }
    else
        printf("number is odd");
}




#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:printf("%d is even",n);
    return;
    odd:printf("%d is odd",n);
    return ;
}
