//static storage class
#include<stdio.h>
#include"p123.c"
void fun(int secretnumber)
{
    int guess,guesscount=0,guesslimit=3;
    int outofguesses=1;
     printf("secretnumber:%d\n",secretnumber);
    while(secretnumber != guess && outofguesses)
    {
        if(guesscount<guesslimit)
        {
            printf("enter guess number :");
            scanf("%d",&guess);
            guesscount++;
            printf("secretnumber is:%d\n",secretnumber);   //how secretnumber update see
        }
        else
        {
            outofguesses = 0;
        }
    }
    if(outofguesses)
    {
        printf("you won!");
    }
    else
    {
        printf("oops you lost secretnumber updated \n");
        //
        //secretnumber=secretnumber+1;
        main(secretnumber);         //main function call
    }
}
