//static storage class use
#include<stdio.h>
int main()
{
static int secretnumber=7;   // will take updated value every time
        secretnumber++;
    fun(secretnumber-1);     //pass 7
}
