#include<stdio.h>
  struct sample
{
    int a ;
    char b ;
    float c;
}s,s1;                   //structure variable
int main()
{
  // struct sample s={12,'k',2.3};   //run time unitilization
  // s.a=20;                          //update a value
   scanf("%d   %c  %f",&s.a,&s1.b,&s.c); //compile time initilization
    printf("%d %c %0.2f",s.a,s1.b,s.c);
}

https://www.geeksforgeeks.org/c-programming-examples/#decision%20making%20programs
