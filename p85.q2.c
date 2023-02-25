//q 14volatile pointer
#include<stdio.h>
int main()
{
    const volatile a=10;
    int *p=&a;
    *p=12;
    printf("%d\n",*p);
    printf("%d",a);
}
