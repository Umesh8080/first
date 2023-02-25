#include<stdio.h>
int main()
{
    int a[50],i,j,n,k,l,b[50];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array element in binary:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }*/
    i=n-1;
   while(i>=0)
   {
       for(k=0;k<n/3+1;k++)
       {
           int sum=0;
           for(j=0;j<3&&i>=0;i--,j++)
           {
               l=a[i]*pow(2,j);
               sum=sum+l;
           }
          // printf("%d\t",sum);
           b[k]=sum;
          // printf("%d\t",b[k]);
       }
   }

   for(k=n/3;k>=0;k--)
   {
       printf("%d\t",b[k]);
   }
}

