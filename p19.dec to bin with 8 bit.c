//decimal to binary conversion
#include<stdio.h>
void main()
{
    int bin,i,a[20],c=0;
    signed int n;
    printf("enter the decimal number:");
    scanf("%d",&n);
    for(i=0;i<=7;i++)
    {
        a[i]=n%2;
        n=n/2;
        c++;
    }
    for(i=7;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    printf("\n%d",c);
//printf("\n%d",c);
//printf("\t");
//for(i=0;i<8-c;i++)
//{
//    a[i]=0;
//    printf("%d",a[i]);
}
//}
