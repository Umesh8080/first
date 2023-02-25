//avg with / operator
#include<stdio.h>
int main()
{

    int n,i,n1,n2,a[10];
    float sum=0,avg;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.1f",avg);
    }
    /* avg without / use
    #include<stdio.h>
int main()
{
    int n,i,a[8],sum=0,c=0;
    printf("enter number of n:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=1;i<=n;i++)
        {
    scanf("%d",&a[i]);
        sum=sum+a[i];
        //c++;
        }
        printf("AVG IS:%0.1f",sum*pow(n,-1));
        }
*/


