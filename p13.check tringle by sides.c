//check triangle sides valid or invalid
#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the sides of tringle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&a==c&&b==c)
        printf("equilateral tringle");
    else if(c*c==a*a+b*b)
        printf("right angle tringle");
    else
        printf("invalid tringle");
}
