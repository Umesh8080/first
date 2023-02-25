//print only 2nd row and 2nd col
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
   // printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=0;
        }
    }
    printf("elements of i:\n");
     for(i=0;i<2;i++)
    {
        scanf("%d",&a[i][2]);
    }
     printf("elements of j:\n");
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[2][j]);
        }
         printf("elements of matrix is:\n");
         for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

