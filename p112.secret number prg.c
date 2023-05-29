#include<stdio.h>
#include"p1.c"
int main()
{
    int secretnumber=7,guess,guesscount=0,guesslimit=3;
    int outofguesses=1;
    while(secretnumber != guess && outofguesses)
    {
        if(guesscount<guesslimit)
        {
            printf("enter guess number :");
            scanf("%d",&guess);
            guesscount++;
        }
        else
        {
            outofguesses = 0;
        }
    }
    if(outofguesses)
    {
        //printf("%d\n",outofguesses);
        printf("you won!");
    }
    else
    {
        printf("oops you lose..!");
    }
}
