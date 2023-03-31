//extern storage class
#include<stdio.h>
extern int a =5; /* this ‘a’ is available entire program */
int main( )
{
   int a = 3; /* this ‘a' is valid only in main */
   printf ("%d\t",a);
   fun ( );
}
fun( )
{
   printf ("%d", a);
}
