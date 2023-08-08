#include<stdio.h>
#include<string.h>
int withdraw(int *);
int deposit(int *);
struct bank
{
    char name[30];   //name
    int B;  //balance
    int pin;
};
int main()
{
    struct bank s[5];  //taking 5 members user
    int i,n,j,g;
//   for(i=1; i<4; i++)
//    {
//        printf("enter %d name:",i);
//        scanf("%s",&s[i].name);
//        printf("enter %d balance:",i);
//        scanf("%d",&s[i].B);
//        printf("enter your %d pin:",i);
//        scanf("%d",&s[i].pin);
//    }
    printf("WEL-COME\n----\n");
    strcpy(s[1].name,"umesh");
    s[1].B=2000;
    s[1].pin=123;
    strcpy(s[2].name,"akash");
    s[2].B=5000;
    s[2].pin=231;
    strcpy(s[3].name,"sushil");
    s[3].B=10000;
    s[3].pin=321;

choose1: //goto statement to take input for invalid choice
    {
        printf("choose user:\n1.umesh\n2.akash\n3.sushil\n");
        scanf("%d",&n);
        printf("-------------\n");
        if(n<=3&&n>0)
        {
            printf("Name:%s\n",s[n].name);
            printf("balance:%d\n\n",s[n].B);
        }
        else
        {
            printf("invalid user please try again\n");
            goto choose1;
        }
    }
    int gc=0;

    while(gc<3)   //security block
    {
        printf("enter your pin:");
        scanf("%d",&g);
        if(s[n].pin==g)
        {
            goto choose2;
        }
        else
        {
            printf("try again\n");
            gc++;
        }
        if(gc==3)
        {
            printf("after some time\n");
            goto choose1;
        }
    }

choose2:
    {
        printf("choose the option:\n1.withdraw\n2.deposit\n3.back\n");
        scanf("%d",&i);

        if(i==1)
        {
            withdraw(&s[n].B);
        }
        else if(i==2)
        {
            deposit(&s[n].B);
        }
        else if(i==3)
        {
            goto choose1;
        }
        else
        {
            printf("invalid choice\n");
            goto choose2;
        }
    }


    printf("your Updated balance is:\n");
    printf("Name:%s\n",s[n].name);
    printf("total balance:%d\n\n",s[n].B);

    printf("do you want to continue\n1.Yes\n2.NO\n");
    scanf("%d",&i);
    if(i==1)
    {
        goto choose2;
    }
    else
    {
        printf("THANK YOU\n");
        printf("--*--*--*--*--*--\n");
        goto choose1;
    }

    // main();                 //taking multiple times input
    scanf("%d",&i);       //to avoid last line
}

int withdraw(int *b)      //pointer used because to update value
{
    int w;        //w is a normal int variable so no need pointer
    printf("enter amount to withdraw:\n");
    scanf("%d",&w);
    if(w<=*b)
    {
        *b=*b-w;
        return *b;
    }
    else
    {
        printf("Insufficient fund\n");
    }
}

int deposit(int *b)
{
    int d;
    printf("enter amount to deposit:\n");
    scanf("%d",&d);
    *b=*b+d;
    return *b;
}
