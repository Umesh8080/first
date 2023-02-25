//floyd tringle print
#include<stdio.h>
int main()
{
    int i,j,n,k,m=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            m=m+1;
            printf("%d ",m);
        }

        printf("\n");
    }
}


/*
//floyd tringle reverse print
#include<stdio.h>
int main()
{
    int i,j,n,k,m=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i;k++)
        {
            m=m+1;
        }
    }
    m=m+1;
     for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            m=m-1;
            printf("%d ",m);
        }

        printf("\n");
    }
}
*/
