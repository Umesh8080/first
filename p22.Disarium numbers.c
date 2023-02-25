//disarium numbers
#include<stdio.h>
//#include<math.h>
int main()
{
    int i,i1,l,l1,p,n;
    printf("enter the n:");
    scanf("%d",&n);
    printf("the DISARIUM numbers are:\n");
    // while(n>0){
    for(i=0; i<n; i++)
    {
        i1=i;
        int rev=0,sum=0;
        while(i1>0)
        {
            l=i1%10;
            rev=rev*10+l;
            i1=i1/10;
        }
        // printf("%d\n",rev);
        for(int j=1; rev>0; j++)
        {
            l1=rev%10;
            p=pow(l1,j);
            sum=sum+p;
            rev=rev/10;
        }
        // printf("%d\n",sum);
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
}

