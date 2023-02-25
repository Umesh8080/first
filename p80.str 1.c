#include<stdio.h>
struct umesh
{
    int a;
    char b;
    float c;
}a1;
int main()
{
    //struct umesh a1;
    a1.a=19;
    a1.b='e';
    a1.c=2.5;
    printf("%d\t%c\t%.2f",a1.a,a1.b,a1.c);
}
