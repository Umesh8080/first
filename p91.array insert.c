//insert element in array
#include<stdio.h>
int main()
{
   int a[]={1,2,3,4,5};
   int p,n,b,i;
   b=sizeof(a)/sizeof(a[0]);
   printf("enter position:");
   scanf("%d",&p);
   printf("enter number:");
   scanf("%d",&n);
  if(p<b)
  {
      for(i=b-1;i>=p;i--)
      {
          a[i+1]=a[i];
      }
      a[i+1]=n;
  }
  else
  {
      printf("invalid input");
  }
  for(i=0;i<b+1;i++)
  {
      printf("%d ",a[i]);
  }
}


////delete of element in array
//#include<stdio.h>
//int main()
//{
//    int a[]={1,2,3,4,5};
//    int i,p,b;
//    b=sizeof(a)/sizeof(a[0]);
//    printf("enter position:");
//    scanf("%d",&p);
//    if(p<b)
//        {
//    for(i=p;i<b;i++)
//    {
//        a[i]=a[i+1];
//    }
//        }
//    else
//    {
//        printf("invalid position:");
//    }
//
//    for(i=0;i<b-1;i++)
//    {
//        printf("%d",a[i]);
//    }
//}
