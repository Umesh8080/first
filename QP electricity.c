//test electricity amount consumed
#include<stdio.h>
int main()
{
    int n,amt,i;
    printf("enter the total amount consumed:");
    scanf("%d",&n);
    if(n<=200)
    {
     amt=n*1;
}
else if(n>200&&n<=300)
{
    amt=25+(n-200)*1.5;
}
else if(n>300)
{
    amt=500+(n-300)*2;
}
printf("the amount is :%d",n);
}


