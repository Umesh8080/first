//fibbanocci series
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d\t%d\t",n1,n2);
    for(int i=2;i<n;i++)
     {
    n3=n1+n2;
printf("%d\t",n3);
    n1=n2;
    n2=n3;
}
}
