//input is Neon number or not
#include<stdio.h>
 int n,n1,l,sum=0;
void neon();
int main()
{
   neon();
   printf("\n\n");
   main();            //output screen purpose
}
void neon()
{

     printf("enter n:");
    scanf("%d",&n);
    n1=n*n;
    while(n1>0)
    {
        l=n1%10;
        sum=sum+l;
        n1=n1/10;
    }
    if(sum==n)
    {
        printf("number is Neon");
    }
    else
    {
        printf("not Neon");
    }
}


//input is Neon numbers up to n (0  1  9)  up to 1 trillian
#include<stdio.h>
 int n,n1,l,sum=0,i;
void neon();
int main()
{
   neon();
   printf("\n\n");
   main();
}
void neon()
{

     printf("enter n:");
    scanf("%d",&n);
    printf("Neon numbers are : ");
    for(i=0;i<=n;i++)
        {
            int sum=0;
    n1=i*i;
    while(n1>0)
    {
        l=n1%10;
        sum=sum+l;
        n1=n1/10;
    }
    if(sum==i)
    {
        printf("%d\t",i);
    }
        }
}
