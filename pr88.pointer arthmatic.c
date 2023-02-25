//pointer arthmatic
#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("%d\n",p);  //adress print a
    printf("%d\n",p+1); //next adress print
    printf("%d\n",*p);  //value at adress print
    printf("%d\n",*(p+1)); //value +1 garbage value
    *p=7;
    char p0;
    p0=(char *)p; //typecasting
     printf("%d\n",a);
    printf("%d\n",p0);
   // printf("%d\n",p0+1);
}
