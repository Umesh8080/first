//to clear a bit input is binary form
#include<stdio.h>
int main()
{
    int k,n,a[8];
    printf("enter the n value:");
    scanf("%d",&n);
//    int n,bin,i,a[8];
//    printf("enter the decimal number:");
//    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
//    for(i=i-1;i>=0;i--)
//    printf("%d",a[i]);
//}

    printf("enter the k value:");
    scanf("%d",&k);
   // n=n&~(1<<k);//clear a bit
   // n=n&(1<<k) //to check a bit
   n=n|(1<<k); //to set abit
   //n=n^(1<<k);// toggle a bit
    printf("%d",n);
}
