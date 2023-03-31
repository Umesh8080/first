//registor storage class
#include <stdio.h>
int main()
{
   register int a = 10;
   ++a;
   printf("Value of a : %d", a);
   printf("\nEnter a value :");
   scanf("%d" , a);                 //not use &
   --a;
   printf("\n Value of a : %d", a);
   return 0;
}
