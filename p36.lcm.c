//lcm of two number
#include<stdio.h>
int main()
{
    int i,a,b,lcm,hcf;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a||i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            hcf=i;
    }
   lcm=a*b/hcf;
    printf("%d",lcm);
}
