//number pattern in square
#include<stdio.h>
int main()
    {
        int n,i,j;
        printf("enter n:");
        scanf("%d",&n);
        printf("\n\n\n");
        for(i=n;i>=1;i--)
        {
            for(j=n;j>i;j--)
            {
                printf("%d ",j);
            }
         for(j=1;j<=i;j++)
         {
             printf("%d ",i);
         }
         for(j=1;j<i;j++)
         {
             printf("%d ",i);
         }
         for(j=i+1;j<=n;j++)
         {
             printf("%d ",j);
         }
          printf("\n");
        }

           for(i=2;i<=n;i++)
        {
            for(j=n;j>i;j--)
            {
                printf("%d ",j);
            }
         for(j=1;j<=i;j++)
         {
             printf("%d ",i);
         }
         for(j=1;j<i;j++)
         {
             printf("%d ",i);
         }
         for(j=i+1;j<=n;j++)
         {
             printf("%d ",j);
         }
          printf("\n");
        }
        scanf("%d",&i);
    }
