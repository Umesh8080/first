//test for basic salary
#include<stdio.h>
int main()
{
int sal,hrs,da,total;
printf("enter the basic salary");
scanf("%d",&sal);
if(sal>1&&sal<400)
{
hrs=sal*10/100;
da=sal*50/100;
}
else if(sal>4001&&sal<8000)
{
hrs=sal*20/100;
da=sal*60/100;
}
else if(sal>8001&&sal<12000)
{
hrs=sal*25/100;
da=sal*70/100;
}
else if(sal>=12000)
{
hrs=sal*30/100;
da=sal*80/100;
}
total=sal+hrs+da;
printf("%d",total);
}
