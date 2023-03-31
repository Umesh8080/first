//finding max value using function
#include<stdio.h>
int main()
{
    int a=5,b=8,c=10,d=4;
    printf("%d",max(a,max(b,max(c,d))));

}

int max(int a1,int b1)
{
    return a1>b1?a1:b1 ;
}
