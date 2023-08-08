#include<stdio.h>
int main()
{
    int n,i,j,l;
int k=1;
    printf("enter n:");
    scanf("%d",&n);
    printf("\t");
    for(i=1;i<4*n;i++)
    {
        printf(".");
    }
    printf("\n");
   for(i=1;i<2*n;i++)
   {
       printf("\t");
     for(l=2*n-i;l>0;l--)
     {
         printf(".");
     }
     for(l=1;l<i;l++)
     {
         printf("*");
     }
     for(l=1;l<=i;l++)
     {
         printf("*");
     }
     for(l=2*n-i;l>0;l--)
     {
         printf(".");
     }
       printf("\n");
   }


     for(i=2*n-1;i>0;i--)
   {
       printf("\t");
     for(l=2*n-i;l>0;l--)
     {
         printf(".");
     }
     for(l=1;l<i;l++)
     {
         printf("*");
     }
     for(l=1;l<=i;l++)
     {
         printf("*");
     }
     for(l=2*n-i;l>0;l--)
     {
         printf(".");
     }
       printf("\n");
   }
   printf("\t");
   for(i=1;i<4*n;i++)
    {
        printf(".");
    }
    puts("\n");
  scanf("%d",&i);
}
