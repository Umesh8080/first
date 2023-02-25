//count same digits and print 3 days
#include<stdio.h>
int main()
{
    int n,a[30],c=0,i=0,j;
    printf("enter the decimal n:");
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        a[i]=n%10;
        n=n/10;
        c++;
        //printf("%d\t",a[i]);
    }
        printf("total digit:%d\n",c);
        for(int i=0;i<c;i++)
            {
             for(int j=0;j<c;j++)
           {
         int temp=0;
            if(a[i]<a[j])
                {

                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                // printf("%d\n",a[i]);
           }
            }
             for(i=0;i<c;i++)
            {
                printf("%d",a[i]);
            }
        printf("\nrepeat\n");
i=0;
for(i=i;i<c-1;i++)
    {    int count=1;
        for(j=i+1;a[i]==a[j];j++)
        {
            //if(a[i]==a[j])
                count++;
        }
        if(count>1)
        {
             printf("%d -> %d\n",a[i],count );
        }
       i=j-1;
       // printf("%d -> %d\n",a[i],count );
    }
    }
