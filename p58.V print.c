//printing V form

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
    scanf("%d",&n);
}
 /*
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=4*n;j++)
        {
            if(i==j||j==2*n-i||j==2*n+i||j==4*n-i||j==4*n+i)
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
*/
