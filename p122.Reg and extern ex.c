//resister and extern program
#include<stdio.h>
#include"p121.c"
void fun(int secretnumber)
{
    int guess,guesscount=0,guesslimit=3;
    int outofguesses=1;
    while(secretnumber != guess && outofguesses)
    {
        if(guesscount<guesslimit)         //3 times will enter loop after that else part enter
        {
            printf("enter guess number :");
            scanf("%d",&guess);
            guesscount++;
        }
        else
        {
            outofguesses = 0;      //once enter in else part while loop will break
        }
    }
    if(outofguesses)
    {
        printf("you won!");     //only for true outofguesses=1
    }
    else
    {
        printf("oops you lose..!");  //outofguesses=0
    }
   // printf("%d",outofguesses);
}
