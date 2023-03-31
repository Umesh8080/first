//static variable
#include<stdio.h>
int main()
{
    fun();
    fun();
    fun();
}
void fun(void)
{
    int a=10;
    static int b=10;
    printf("a=%d    b=%d\n",a,b);
    a++;
    b++;

}
