//strong number or not
#include<stdio.h>
int main()
{
    int n,i,sum=0,n1,l;
    //int fact=1;
    printf("enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        int fact=1;
        l=n%10;
        for(i=1;i<=l;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
 if(n1==sum)
   {
    printf("strong");
    }
    else
    {
        printf("not");
    }

}
