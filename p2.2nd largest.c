//2nd largest number using relational operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a b and c value:");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a>c&&a<b))
    {
        printf("%d is 2nd largest number");
    }
    if((b>a&&b<c)||(b>c&&b<a))
    {
        printf("%d is 2nd largest number");
    }
    if((c>a&&c<b)||(c<a&&c>b))
    {
        printf("%d is 2nd largest number");
    }
}
