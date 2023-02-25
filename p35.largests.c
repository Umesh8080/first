//printing largest of number
#include<stdio.h>
int main()
{
    int i,j,a[5],temp;
    printf("enter the numbers:");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
         for(j=0;j<5-i;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

        printf("largest of number:%d",a[0]);
    }

