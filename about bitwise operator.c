#include<stdio.h>
int main()
{
    int i,c=0,a[8],n,n1,n2,n3,n4,k,n11,n21,n31,n41;
    printf("enter the decimal no:");
    scanf("%d",&n);
    n1=n2=n3=n4=n;
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
    printf("\nenter k:");
    scanf("%d",&k);
    n1=n1|(1<<k);//set
         // n11=(n11>>k)|1;
     n2=n2&~(1<<k);//clear
        //   n21=~(n21>>k)&1;
      n3=n3&(1<<k);//extract
      n31=(n31>>k)&1;
       n4=n4^(1<<k);//toggle
          //   n41=(n41>>k)^1;
       printf("set:%d\nclear:%d\nextract:%d\nextract:%d\ntoggle:%d",n1,n2,n3,n31,n4);
}
