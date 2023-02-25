//even or odd using bitwise operator
#include<stdio.h>
int main()
{
    int n;
    printf("enter the decimal no:");
    scanf("%d",&n);
   // if((n&(1<<0))==1)
        if(n&1==1)
    {
        printf("odd");
    }
    else
        printf("even");
}
