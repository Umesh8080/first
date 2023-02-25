#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=2*n;j++)
        {
         if(i==j||j==2*n-i)
         {
             printf("#");
         }
         else
         {
            printf(" ");
         }
        }
        printf("\n");
    }
     for(i=n;i>=0;i--)
    {
        for(j=0;j<=2*n;j++)
        {
         if(i==j||j==2*n-i)
         {
             printf("#");
         }
         else
         {
            printf(" ");
         }
        }
        printf("\n");
    }
}
