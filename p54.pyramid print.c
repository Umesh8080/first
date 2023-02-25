//pyramid print
#include<stdio.h>
int main()
{
    int i,j,n,k,l,m;
    printf("enter n:");
    scanf("%d",&n);
  //printf("%d",i);
   for(l=0;l<1;l++)
    {
        for(m=n-i;m>0;m--)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("* ");

        for(k=2;k<=i;k++)
        {
            printf("  ");
        }
        printf("*");
        printf("\n");
    }
}
