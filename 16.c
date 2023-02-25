#include<stdio.h>
int main()
{
    int i,a[8];
    printf("enter a byte:");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<4;i++)
    {
    printf("lower nibble of entered byte is:%d\n",a[i]);
    }
    for(i=4;i<8;i++)
    {
    printf("\nhigher nibble of entered byte is:%d",a[i]);
    }
}
