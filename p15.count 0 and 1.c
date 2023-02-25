//count the no of 0 and 1
#include<stdio.h>
int main()
{
    int n,l,a[8],c0=0,c1=0;
    printf("enter the decimal no :");
    scanf("%d",&n);
 for(int i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
        if(a[i]==0)
        {
            c0++;
        }
        else
            c1++;
    }
    printf("no of 0:%d\nno of 1:%d",c0,c1);
    }
        //printf("%d",a[i]);

//           for(int i=3;i>=0;i--)
//           {
//               printf("%d",a[i]);
//           }



