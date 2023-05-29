//DOB calculation
#include<stdio.h>
int main()
{
    int pd,pm,py,bd,bm,by,month,d,y,m,lp;
    printf("enter present day:");
    scanf("%d",&pd);
    printf("enter present month:");
    scanf("%d",&pm);
    printf("enter present year:");
    scanf("%d",&py);

    printf("enter birth day:");
    scanf("%d",&bd);
    printf("enter birth month:");
    scanf("%d",&bm);
    printf("enter birth year:");
    scanf("%d",&by);
    lp=(py-by)/4;
    if(pd<bd)
    {
        pd=pd+m1(pm);
        pm--;
    }
    if(pm<bm)
    {
        pm=pm+12;
        py--;
    }
    d=pd-bd+lp;
    m=pm-bm;
    y=py-by;
    //printf("%d   ",y*365+y*30+d);
    printf("y:%d  m:%d  d:%d",y,m,d);
}

int m1(int month,int py)
{
    switch(month)
    {
    case 1:
        return 31;
        break;
    case 2:
        return 28;
        break;
    case 3:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 9:
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 12:
        return 31;
        break;
    }
}
