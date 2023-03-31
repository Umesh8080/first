//circle prog
#include<stdio.h>
#define  pi 3
int main()
{
    int r,d,c,a;
    printf("enter r:");
    scanf("%d",&r);
    d=dia(r);
    c=cir(r);
    a=area(r);
    printf("d=%d\nc=%d\na=%d\n",d,c,a);
}
int dia(int r)
{
    //printf("%d",2*r);
    return 2*r;
}
cir(int r)
{
    return 2*pi*r;
}
area(int r)
{
    return pi*r*r;
}
