#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p,i;
    printf("enter n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("entered values are:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
    }
//    printf("%d",p);
}
