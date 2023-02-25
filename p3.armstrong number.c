//armstrong number up to n
#include<stdio.h>
int main()
{
    int i,n,i1,p,l,i2;
    printf("enter n:");
    scanf("%d",&n);
    if(n>0)
        {
    for(i=1;i<=n;i++)
    {
       int c=0,sum=0;
       i1=i;
       i2=i;
    while(i1>0)
    {
       i1= i1/10;
        c++;
    }
   // printf("%d\n",c);
    while(i2>0)
    {
        l=i2%10;
       p= pow(l,c);
        sum=sum+p;
        i2=i2/10;
    }
   // printf("%d\n",sum);}}
   if(i==sum)
   {
       printf("%d\n",i); //at last we use original value or store in temp variable
   }
}}
else
    printf("BHAI ENTER POSITIVE NUMBER");
}

