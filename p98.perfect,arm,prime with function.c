//check number is armstrong , prime , perfect number all 3
#include<stdio.h>
void prime(int);
void arm(int);
void perfect(int);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    prime(n);
    printf("\n");
    arm(n);
    printf("\n");
    perfect(n);
}

void prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("prime");
    }
    else
        printf("not prime");
}

void arm(int n)
{
    int c=0,n1,sum=0,l,n2;
    n1=n;
    n2=n;
   while(n>0)
   {
       n=n/10;
       c++;
   }
   //printf("%d\n",c);
   while(n1>0)
   {
       l=n1%10;
       n1=n1/10;
       sum=sum+pow(l,c);
   }
   if(n2==sum)
   {
       printf("armstrong");
   }
   else
    printf("not armstrong");
}

void perfect(int n)
{

    int i,sum=0,n3;
    n3=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n3)
    {
        printf("perfect");
    }
    else
    {
        printf("not perfect");
    }
}


//check number is armstrong , prime , perfect number any one
#include<stdio.h>
int prime(int);
 arm(int);
int perfect(int);
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    //prime(n);
    //arm(n);

    if( perfect(n))
    {
        printf("perfect");
    }

    else if(prime(n))
    {
        printf("prime");
    }

    else if(arm(n))
    {
        printf("armstrong");
    }

    else
    {
        printf("not");
    }
}

 prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
return c==2;
}

arm(int n)
{
    int c=0,n1,sum=0,l,n2;
    n1=n;
    n2=n;
   while(n>0)
   {
       n=n/10;
       c++;
   }
   while(n1>0)
   {
       l=n1%10;
       n1=n1/10;
       sum=sum+pow(l,c);
   }
return n2==sum;
}

int perfect(int n)
{

    int i,sum=0,n3;
    n3=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }    return n3==sum;
}




