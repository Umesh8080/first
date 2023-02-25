//c program to print sort of 2D array element row wise
#include<stdio.h>
int main()
{
    int i,j,k,temp,m,n;
    printf("enter row and col of array:\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter elements of array:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("actual array:\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
 for(i=0;i<m;i++)

        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(a[i][j]<a[i][k])
                {
                temp=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=temp;
                }
            }
        }

 printf("sorted array:\n");
 for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++)
            {
                printf("%d\t",a[i][k]);
            }
            printf("\n");
        }
}
