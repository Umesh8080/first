//CHECK NUMBER IS SQUERE OR NOT
#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("enter n:");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n==i*i)
    {
        c++;
    }
}
if(c==1)
{
    printf("YES");
}
else
    printf("FALSE");
}
