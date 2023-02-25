//greatest of 3 number without using logical operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c value:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater:%d",a);
        }
    }
    else if(b>c)
        printf("%d is greater",b);
    else
        printf("%d is greater",c);
}
//    if(b>a)
//    {
//        if(b>c)
//        {
//            printf("b is greater:%d",b);
//        }
//    }
//    if(c>a)
//    {
//        if(c>b)
//        {
//            printf("c is greater:%d",c);
//        }
//    }
//
//}
