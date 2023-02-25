//swap 1st and last digit of number
#include<stdio.h>
int main()
{
    int i,j,n,a[30],c=0,temp=0,n1,n2,b;
    printf("enter n:");
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(i=0;n2>0;i++)
    {
        a[i]=n2%10;
        n2=n2/10;
    }
   int m=c;
            temp=a[0];
            a[0]=a[m-1];
            a[m-1]=temp;
        for(i=m-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
             //printf("\n%d %d %d",temp,a[0],a[m-1]);
}
