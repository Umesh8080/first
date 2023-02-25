#include<stdio.h>
int main()
{
    int i,j;
    printf("\n\n\n");
    for(i=0;i<=3;i++)
    {
        printf("\t");
        for(j=0;j<=5;j++)
        {
            if(j==2||j==3)
            {
            printf("#  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\t");
     for(j=0;j<=5;j++)
        {
            if(j==1||j==4)
            {
            printf("#  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
         for(i=4;i<=15;i++)
    {
         printf("\t");
        for(j=0;j<=5;j++)
        {
            if(j==0||j==5||i==15)
            {
            printf("#  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    scanf("%d",&i);
}

