//q 16 union using pointer
#include<stdio.h>
union uni
{
    int a;
    char b;
};
int main()
{
    union uni u;
    u.a=10;
    union uni *u1=&u;
    printf("%d\n",u1->a);
    u.b='b';
    printf("%d",u1->b);
}
