//even or odd using function with argument and without return type
#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fun(n);    //function call by n only (actual parameter)
}
void fun(int n1)   //function definition (formal parameter) variable name is anything
{
    printf("%d:",n1);
    if(n1%2==0)
    {
       printf("even");
    }
    else
    {
       printf("odd");

    }
}


//with return and with argument
#include<stdio.h>
int even(int);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(even(n))
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
int even(int n)
{
    return !(n&1);
    //return n%2==0;   // alternate way
}
