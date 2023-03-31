//cube of any number
 cube(int a)  ;
#include<stdio.h>
int main()
{
    int a,r;
    printf("enter vaue a:");
    scanf("%d",&a);
    printf("before:%d\n",a);
    r=cube(a);
    printf("%d\n",r);
    printf("after:%d\n",a);
     return 0;              //end of program or block
     printf("mret:%d",a);  //not print

}
 cube(int a)                //int is default return type
{
   printf("in fun:%d\n",a);
    return a*a*a;
    printf("ret:%d\n",a);  //not print
}
