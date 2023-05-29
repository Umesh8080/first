#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<=n;i++)
    {
        printf("\t");
          for(j=0;j<=n;j++)
            {
              if(i==n/2||j==n/2||(i==0&&j>n/2)||(i==n&&j<n/2)||(j==0&&i<n/2)||(j==n&&i>n/2))
              {
                  printf("# ");
              }
              else
                printf("  ");
          }
          printf("\n");
    }
}
