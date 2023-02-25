//polindrome
#include<stdio.h>
int main()
{
    int n,n1,rem,i=1,i1;
    printf("enter your number :");
    scanf("%d",&n);
    n1=n;
    for(int i=1;i<=n;i++)
        {
            i1=i;
             int rev=0;
    while(i1>0)
        {
        rem=i1%10;
        rev=rev*10+rem;
        i1=i1/10;
    }
    if(i==rev)
    {
      printf("%d\n",i);
    }
        }
        }
