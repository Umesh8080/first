//auto storage classes
/*
#include<stdio.h>
//auto int  a=3;
int main()
{
    int a=5;
    {
        a=10;
    }
    printf("%d\n",a);
}
*/
/*
#include<stdio.h>
//auto int  a=3;
int main()
{
   auto int a=5;
    {
     auto  a="ghj";
       {
           auto a=20;
           {
               int a=30;
               {
                   auto a=10.5;
                    printf("%f\n",a);
               }
                printf("%d\n",a);
           }
           printf("%d\n",a);
       }
       printf("%s\n",a);
    }
    printf("%d\n",a);
}
*/
//extern storage class
/*
#include<stdio.h>
extern int a=5;
int main()
{
    int a=10;
    printf("%d\n",a);
    fun();
}
fun()
{
    printf("%d",a);
}
*/
