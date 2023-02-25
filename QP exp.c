//test pseudocode
#include<stdio.h>
int main()
{
    int a,b,c;
    a=8;
    b=51;
    c=2;
    c=(a^c)^(a);
    b=a%4;
    printf("%d",a+b+c);
}
