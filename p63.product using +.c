//product of numbers using +
#include<stdio.h>
int main()
{
    int a,b,sum=0,c=0,i,sum1=0;
    printf("enter a and b:");
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;b>0;i++)
    {
        b=b-1;
        sum=sum+a;
    }
  //  printf("%d\n",sum);
    for(i=0;c>0;i++)
    {
        c=c-1;
        printf("c=%d\n",c);
        printf("%d\n",sum1);
        sum1=sum1+sum;
    }
   // printf("%d",sum1);


}
