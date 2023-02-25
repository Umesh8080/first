//binary to octal:
#include<stdio.h>
int main()
{
    int a[50],i,j,n,k,l,b[50],c=0;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array element in binary:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   /* for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }*/
    i=n-1;
 //  while(i>=0)
 //  {
       for(k=0;i>=0;k++)
       {
           int sum=0;
           for(j=0;j<3&&i>=0;i--,j++)
           {
               l=a[i]*pow(2,j);
               sum=sum+l;
           }
          // printf("%d\t",sum);
           b[k]=sum;
           printf("%d\t",i);
          c++;
       }
  // }
 printf("octa value is:");
   for(k=c-1;k>=0;k--)
   {
       printf("\n%d",b[k]);
   }
}
