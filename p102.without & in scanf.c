//without & inside scanf function
#include<stdio.h>
int main()
{
    int x;
    int p;
    p=&x;
    scanf("%d",p);
   printf("%d",x);
}