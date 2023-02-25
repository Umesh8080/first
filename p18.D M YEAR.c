//month and year calc
#include<stdio.h>
int main()
{
    int d,y,y1,m,m1,d1;
    printf("enter days:");
    scanf("%d",&d);
    y=d/365;
    y1=d%365;
    m=y1/30;
    m1=y1%30;
    d1=m1;
    printf("year:%d\nmonth:%d\ndays:%d",y,m,d1);
/*
int y,m,d,days;
printf("enter y,m,d:");
scanf("%d%d%d",&y,&m,&d);
days=y*365+m*30+d;
printf("%d",days);
*/
}
