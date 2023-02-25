#include<stdio.h>
int main()
{
    int a=2;
    void *ptr;
    ptr=&a;
    printf("after typecasting:%d",*(int *)ptr);
}
