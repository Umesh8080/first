#include<stdio.h>
int main()
{
    int i,j,k;
   for(i=1;i<=5;i++)
   {
       for(j=i;j<=5;j++)
       {
           printf(" ");
       }
       for(k=1;k<=i*2-1;k++)
       {
           if(i%2==0)
           {
               printf("-");
           }
           else
            printf("*");
       }
       printf("\n");
       }


        for(i=4;i>=1;i--)
   {
       for(j=i;j<=5;j++)
       {
           printf(" ");
       }
       for(k=1;k<=i*2-1;k++)
       {
           if(i%2==0)
           {
               printf("-");
           }
           else
            printf("*");
       }
       printf("\n");
       }

   }

