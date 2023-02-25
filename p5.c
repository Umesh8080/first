//q 15 print *
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j||i+j==n)
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
        for(j=0;j<=n;j++)
        {
            if(i==j||i+j==n)
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
/*
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("#");
        for(k=i;k<=n;k++)
        {
            printf(" ");
        }
         for(k=i;k<n;k++)
        {
            printf(" ");
        }
        if(i<n+1)
        {
            printf("#");
        }
        printf("\n");
    }
     for(i=n;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("#");
        for(k=i;k<=n;k++)
        {
            printf(" ");
        }
         for(k=i;k<n;k++)
        {
            printf(" ");
        }
        if(i<n+1)
        {
            printf("#");
        }
        printf("\n");
    }
}
*/
