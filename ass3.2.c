#include<stdio.h>
struct std
{
    int a;
    char b;
}s;
int main()
{
    struct std *v;
   v=&s;
   s.a=1;
   s.b='b';
   printf("%d %c",v->a,v->b);
}

