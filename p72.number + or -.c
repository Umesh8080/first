//number positive or negetive without > < operator
#include<stdio.h>
int main()
{
    int n,c=0,n2,n1;
    printf("enter n value:");
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n2=n1/pow(10,c-1);
    if(n2==1||n2==2||n2==3||n2==4||n2==5||n2==6||n2==7||n2==8||n2==9||n2==0)
    {
        printf("positive");
    }
    else
        printf("negetive");
}
