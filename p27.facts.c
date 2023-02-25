//facorial of number from min to max
#include<stdio.h>
int main()
{
    int fact,i,n;
    printf("enter then number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    printf("fact of %d is : %d\n",i,fact);
    }
}
