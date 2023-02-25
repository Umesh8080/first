//decimal to binary conversion
#include<stdio.h>
void main()
{
    int bin,i,a[20],c=0;
    signed int n;
    printf("enter the decimal number:");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            a[i]=0;
        }
        else
            a[i]=1;

    printf("%d",a[i]);
    }
}
