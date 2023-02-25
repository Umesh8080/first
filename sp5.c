#include<stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,8,9,0,1,2,3,4,8},i,j;
    printf("enter the
    printf("matrix is:\n");
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

 printf("\n");
  /*   for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j==(3-i))
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                a[i][j]=0;
                printf("%d ",a[i][j]);
            }
        }
         printf("\n");
    }
}
*/
