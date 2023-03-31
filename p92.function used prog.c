//1.sum of 2 numbers
#include<stdio.h>
int sum(int ,int);
int main()
{
    int a,b,r;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    sum(a,b);
}
int sum(int a,int b)
{
    int add;
    add=a+b;
    printf("%d\n",add);
}


//2.square of number
#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
   // printf("%d",square(n));
    square(n);
}
int square(int n)
{
   // return n*n
    printf("%d",n*n);
}


//3.swap of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    swap(a,b);
}
int swap(int a,int b)
{
    int temp;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\t%d",a,b);
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    swap(a,b);
}
int swap(int a,int b)
{
    int temp;
    temp=a;a=b;b=temp;
    printf("%d%d",a,b);
}


//4.check even or odd
#include<stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fun(n);
}
int fun(int n)
{
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}


//5.sum of factorial of number up to n
#include<stdio.h>
int n,i,fact,sum=0,j;
int main()
{
    printf("enter n:");
    scanf("%d",&n);
    printf("%d",fact1(n));
}
int fact1(int n)
{
    for(i=1;i<=n;i++)
    {
        fact=i;
        for(j=1;j<i;j++)
        {
            fact=fact*j;
        }
       sum=sum+fact;
    }
    return sum;
}


//6.sort of array
#include<stdio.h>
 int a[5],i,j,temp;
int main()
{

    printf("enter array element:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    fun();
}
int fun()
{
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}


//7.check perfect numbers from 1 to 100
#include<stdio.h>
 int n,i,j;
int main()
{
    printf("enter n:");
    scanf("%d",&n);
    fun();
}
int fun()
{
    for(i=1;i<=n;i++)
    {
        int sum=0;
    for(j=1;j<i;j++)
    {
        if(i%j==0)
        {
            sum=sum+j;
        }
    }
    if(i==sum)
    {
        printf("%d ",i);
    }
}
}


//8.string check anagram
#include<stdio.h>
int i,j,c=0,a,b;
int main()
{
     char str1[20],str2[20];
   scanf("%s",str1);
   a=strlen(str1);
  scanf("%s",str2);
  b=strlen(str2);
    fun(str1,str2);
}
int fun(char str1[],char str2[])
{

  if(a==b)
  {
      for(i=0;i<a;i++)
      {
          for(j=0;j<a;j++)
          {
              if(str1[i]==str2[j])
              {
                  c++;
              }
          }
      }
  }
  if(c==a)
  {
      printf("anagram");
  }
  else
  {
      printf("not");
  }

}

