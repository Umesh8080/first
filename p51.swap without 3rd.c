//Swapping of two variable without using 3rd variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the a and b value:");
    scanf("%d%d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
    printf("a=%d\tb=%d",a,b);
}
