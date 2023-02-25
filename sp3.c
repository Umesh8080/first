//matrix print diagonal 1
#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("enter the element of matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
            }
        }
    }
    printf("matrix is:\n");
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}


