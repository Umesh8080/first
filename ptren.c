#include<stdio.h>
int main()
{
    int i,N,j;
    printf("enter N:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
