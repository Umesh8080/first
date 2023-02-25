//printing 1st digit of number
#include<stdio.h>
int main()
{
    int n,rev=0,l,l1,i;
    printf("enter the number:");
    scanf("%d",&n);n
    while(n>0)
    {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
   // printf("%d",rev);


        l1=rev%10;


    printf("%d",l1);
}
