//q 13 difference between *++p and ++*p
#include<stdio.h>
int main()
{
    int a[3]={10,9,8};
    int *p=&a;
    printf("%d\n",*++p);
    printf("%d",++*p);
}
