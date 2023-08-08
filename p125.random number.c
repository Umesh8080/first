#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
   int i,a;
   for(i=1;i<=15;i++)
   {
   a=rand()%10;
       if(a==0)
       {
           a=a+1;
       }
   printf("%d ",a);
   }
}
