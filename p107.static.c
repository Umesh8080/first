#include <stdio.h>
void abc();      //function declaration
int main(){
   abc();      //function call
   abc();
   abc();
   return 0;       //to execute with 0 error purpose we use
}
void abc()        //without return and without argument type function
{
    static int a = 5;          //a is updated value every time of function call
    a++;
    printf("a = %d\n", a);
}

#include <stdio.h>
/* function declaration */
void func(void);
static int count = 5; /* global variable */
int main()
{
      while(count--)
      {
      func();
      }
      return 0;
}
/* function definition */
void func( void )
{
   static int i = 5; /* local static variable */
   i++;
   printf("i is %d and count is %d\n", i, count);
}
