//msb and lsb swap 3 bits
#include<stdio.h>
int main()
{
    int n,a[8],i,x;
    printf("enter the decimal no:");
    scanf("%d",&n);
 for(i=0;i<8;i++)
 {
     a[i]=n%2;
     n=n/2;
 }
 x=a[3];
 a[3]=a[4];
 a[4]=x;
 for(i=0;i<8;i++)
 {
     printf("%d",a[i]);
 }
}
