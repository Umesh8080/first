//sum using recursion
#include<stdio.h>
int main()
{
    int n,result;
    printf("enter n:");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
}
int sum(int n)
{
    while(n>0)
    {
    return n+sum(n-1);
    }
}


//factorial using recursion
#include <stdio.h>
int fact (int);
int main()
{
    int n,f;
    scanf("%d",&n);
    f = fact(n);
    printf("factorial = %d",f);
}
int fact(int n)
{
   if(n>0)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}

//fibbanocci series
#include<stdio.h>
int main()
{
    int n,r,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
    r=fibb(i);
    printf("%d   ",r);
        }
}
int fibb(int i)
{

        if(i==1)
        {
            return 1;
        }
        else if(i==0)
        {
            return 0;
        }
        else
            return fibb(i-1)+fibb(i-2);
    }


