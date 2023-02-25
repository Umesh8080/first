//polindrome
#include<stdio.h>
int main()
{
    int n,n1,rem,rev=0;
    printf("enter your number :");
    scanf("%d",&n);
    n1=n;
    while(n>0)
      //      for(int i=0;n>0;i++)
            {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    if(n1==rev)
    {
        printf("palindrome");
    }
    else{
        printf(" Not a palindrome");
    }
    }
