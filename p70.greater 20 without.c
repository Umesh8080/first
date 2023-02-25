//prog to check number greater than 20 without using < > operator
#include<stdio.h>
int main()
{
    int n,c=0,n1,a,n2;
    char b='-';
    printf("enter  n :");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n1=n1/pow(10,c-1);
  // printf("%d\n%d",n1,c);
    if(n2==20||n1==-1||n1==-2||n1==-3||n1==-4||n1==-5||n1==-6||n1==-7||n1==-8||n1==-9||n1==0||(n1==1&&c==2)||c==1)
    {
        printf("lesser");
    }
   else
    {
        printf("greater");
    }
}

