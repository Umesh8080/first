#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],i,j,sum[2][2];
    printf("enter the a matrix numbers:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
   scanf("%d",&a[i][j]);

        }
    }
printf("\n");
//     for(i=0;i<2;i++)
//    {
//        for(j=0;j<2;j++)
//        {
//   printf("%d\t",a[i][j]);
//
//        }
//        printf("\n");
//    }
//    printf("\n");
    printf("enter b matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
   scanf("%d",&b[i][j]);

        }
    }
    printf("\n");

//     for(i=0;i<2;i++)
//    {
//        for(j=0;j<2;j++)
//        {
//   printf("%d\t",b[i][j]);
//
//        }
//        printf("\n");
//    }
//    printf("\n");
    printf("MULTIPLE OF MATRIX IS:\n\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
   {
     sum[i][j]=0;
    for(int k=0;k<2;k++)
    {
        sum[i][j]+=a[i][k]*b[k][j];
    }
    printf("%d\t",sum[i][j]);
}
printf("\n");
}}
