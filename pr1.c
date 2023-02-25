#include<stdio.h>
int main()
{
    int a[]={1,3,5,7,9},i;
    int *p=a;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
    }
}
