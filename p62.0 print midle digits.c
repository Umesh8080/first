// middle digits print as 0
#include<stdio.h>
int main()
{
    int n,m,n1,n2,c=0,m1,m2,n3;
    printf("enter n:");
    scanf("%d",&n);
    n1=n/10;
    n2=n1;
    n3=n%10;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
   int x=pow(10,c-1);
    m=n2%x;
    m2=n2/x;
    printf("%d",m2);
   // printf("\n%d\n",m);
    while(m>0)
    {
        //m1=m%10;
        m=m/10;
        //m1=0;
        //m=0;
    printf("0");
    }
    printf("%d",n3);

}
