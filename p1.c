#include<stdio.h>
int main()
{
    int age=12;
    int *ptr=&age;
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d",&age);
}
