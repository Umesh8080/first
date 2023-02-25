#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("  \n        GOOD UMESH YOU ARE ON TOP OF THE SLOPE STAY THEIR ONLY !!!! \n\n\n  ");
    int a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%c",a[k]);
        }
         for(k=i-1;k>=0;k--)
        {
            printf("%c",a[k]);
        }
        printf("\n");
    }
    scanf("%d",&n);
}
