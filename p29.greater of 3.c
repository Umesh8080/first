//greatest of 3 number
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter th numbers:");
    scanf("%d%d%d",&a,&b,&c);
    /*if(a>b)
    {
       if(a>c)
        {
            printf("a is greater");
        }
    }
    else if(b>c)
    {
       printf("b is greater ");
    }
        else printf("c is largest");
}
*/
     if(a>b&&a>c)
     {
         printf("%d is greater",a);
     }
     else if(b>a&&b>c)
     {
         printf("%d is greater",b);
     }
     else
        printf("%d is greater",c);
     }
