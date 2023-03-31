//C Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include<stdio.h>
int main()
{
    int n,i,j,k=0,a[20],n1,c1=0;
    printf("enter n:");
    scanf("%d",&n);
    n1=n;
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
       if(c==2)
       {
         //printf("%d\t",i);
         a[k]=i;
         k++;
       }
    }
    for(i=0;i<k;i++)
    {
        for(j=i;j<k;j++)
        {
            if(a[i]+a[j]==n1)
            {
                printf("sum of prime numbers are:%d\t%d\n",a[i],a[j]);
                c1++;                     //else statement purpose
            }
        }
    }
    if(c1==0)
    {
        printf("not posssible");     //else statement purpose
    }
}
