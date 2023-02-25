//check lsb and msb bit of number
#include<stdio.h>
int main()
{
    int a[50],n,i,c=0;
    printf("enter n in decimal :");
    scanf("%d",&n);
   for(i=0;n>0;i++)
   {
       a[i]=n%2;
       n=n/2;
       c++;
   }
   for(i=c-1;i>=0;i--)
    {
   printf("%d",a[i]);
   }
   printf("\n");
   printf("lsb:%d\n",a[0]);
   printf("msb:%d",a[c-1]);
}
