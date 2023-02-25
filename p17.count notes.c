 //number of notes
 #include<stdio.h>
 int main()
{
    int n;
    int note500,note200,note100,note50,note10,note20;
    printf("Enter the amount:");
    scanf("%d",&n);
    while(n>=10)
    {
        if(n>=500)
        {
            note500=n/500;
            n=n%500;
            printf("note500 is %d\n",note500);
        }
        else if(n>=200)
        {
            note200=n/200;
            n=n%200;
            printf("note200 is %d\n",note200);
        }
        else if(n>=100)
        {
            note100=n/100;
            n%=100;
            printf("note100 is %d\n",note100);
        }
        else if(n>=50)
        {
            note50=n/50;
            n=n%50;
            printf("note50 is %d\n",note50);
        }
        else if(n>=20)
        {
            note20=n/20;
            n%=20;
            printf("note20 is %d\n",note20);
        }
        else if(n>=10)
        {
            note10=n/10;
            n%=10;
            printf("note10 is %d\n",note10);
        }
    }
printf("The remaining amount is: %d",n);

}
