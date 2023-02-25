//program to print sum of digits
#include<stdio.h>
int main()
{
    int n,i,sum=0,q;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
       {
        q=n%10;
        sum=sum+q;
         n=n/10;
}
printf("%d",sum);
}
