//only middle digits print
#include<stdio.h>
int main()
{
    int n,m,n1,n2,c=0;
    printf("enter n:");
    scanf("%d",&n);
    n1=n/10;
    n2=n1;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
   int x=pow(10,c-1);
    m=n2%x;
    printf("%d",m);

}
