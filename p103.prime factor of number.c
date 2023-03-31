//prime factors of number
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int c=0;
            //printf("%d\t",i);
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c==2)
                {
                    printf("%d\t",i);
                }
        }
    }
}
