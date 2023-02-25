//highest bit pos of 0 and 1
#include<stdio.h>
int main()
{
    int n,a[8],i,c=0;
    printf("enter the decimal no:");
    scanf("%d",&n);
    for(i=1;n>0;i++)
   {
        a[i]=n%2;
        n=n/2;
       c++;
    }
for(i=c-1;i>0;i--)
{
if(a[i]==0)
{
    printf("0th highest bit pos is:%d\n",i);
break;
}
}
for(i=c;i>0;i--)
{
 if(a[i]==1)
{
    printf("1's highest bit pos is:%d\n",i);
break;
}}}
