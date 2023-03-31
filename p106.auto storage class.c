//auto storage class
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
    auto int a = 5;          //read a as new every time of function call
    a++;
    printf("a = %d\n", a);
}

#include <stdio.h>
void abc();
int main()
{
    auto int a = 5;
    ++a;
    abc();
    abc();
    ++a;            //here both variable a are different
    printf("\n a = %d", a);
    return 0;
}
void abc()
{
    int a = 10;
    ++a;
    printf("\n a = %d ", a);
}

#include <stdio.h>
void abc();
int main()
{
    abc();
    abc();
    printf("\n a = %d", a);   //error because a is only within block
    return 0;
}
void abc()
{
    int a = 10;
    ++a;
    printf("\n a = %d ", a);
}
