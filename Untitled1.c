#include<stdio.h>
#include<math.h>
int main()
{
    int p,m,s,s1;
    printf("enter password to enter the chamber:");
    scanf("%d",&p);
    if(p==1212)
    {
        printf("come in\n");
        printf("hi sir can i sit?\n");
        printf("yaa! can we start HR interview?\n");
        printf("yes sir\n");
    }
    else
    {
        printf("again enter password and come in\n\n");
    }
    if(p==1212)
    printf("how much you scored in TR round?\n\n");
    scanf("%d",&m);
    if(m>=4)
    {
        s=8;
        printf("oh! thats nice:\n\n");
        printf("your expected salary is:%d LPA\n",s);
    }
    if (m<=3)
    {
        s1=3;
        printf("OK! thats good but you have to work on basics\n\n");
        printf("your expected salary is:%d LPA",s1);

    }
}

