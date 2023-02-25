#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the n:");
    scanf("%d",&n);
    printf("\n\n\n1.\n");
     for(i=0;i<=n;i++)
    {
       // printf("\t");
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
       for(k=0;k<=i;k++)
       {
           printf("* ");
       }
       for(k=0;k<i;k++)
       {
           printf("* ");
       }
       printf("\n\n");
    }
    printf("\n\n\n2.\n");
     for(i=0;i<n;i++)
    {
       // printf("\t");
        for(j=i;j<n;j++)
        {
            printf("   ");
        }
       for(k=0;k<=i;k++)
       {
           printf("*  ");
       }
//        for(k=0;k<i;k++)
//       {
//           printf("*");
//       }
       printf("\n");
    }
    for(i=n;i>=0;i--)
    {
       // printf("\t");
        for(j=i;j<n;j++)
        {
            printf("   ");
        }
       for(k=0;k<=i;k++)
       {
           printf("*  ");
       }
//        for(k=0;k<i;k++)
//       {
//           printf("*");
//       }
       printf("\n");
    }
     printf("\n\n\n3.\n");
       for(i=n;i>=0;i--)
    {
       // printf("\t");
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
       for(k=0;k<=i;k++)
       {
           printf("* ");
       }
       for(k=0;k<i;k++)
       {
           printf("* ");
       }
       printf("\n\n");
    }
    printf("\n\n\n4.\n");
     for(i=0;i<=n;i++)
     {
         for(j=0;j<=i;j++)
         {
             printf("*  ");
         }
         printf("\n");
     }
      for(i=n;i>=0;i--)
     {
         for(j=0;j<i;j++)
         {
             printf("*  ");
         }
         printf("\n");
     }

    scanf("%d",&n);

}
