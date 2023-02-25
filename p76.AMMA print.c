  #include<stdio.h>
//#define
int main()
{
    int i,j;
    printf("\n\n\n\n");
    for(i=1;i<=13;i++)
    {
       printf("\t");
        for(j=1;j<=20;j++)
        {
            if((i==1)&&(j==2||j==3||j==6||j==18))
                {
          printf("#   ");
                }
                else if((i==2)&&(j==2||j==3||j==5||j==7||j==15||j==16||j==17||j==18))
                {
          printf("#   ");
                }
                  else if((i==3)&&(j==2||j==5||j==7||j==9||j==10||j==17))
                {
          printf("#   ");
                }
                  else if((i==4)&&(j==1||j==2||j==3||j==4||j==5||j==7||j==9||j==10||j==17||j==20))
                {
          printf("#   ");
                }
                  else if((i==5)&&(j==2||j==7||j==9||j==20||j==17||j==13))
                {
          printf("#   ");
                }
                  else if((i==6)&&(j==3||j==6||j==9||j==12||j==14||j==17||j==20))
                {
          printf("#   ");
                }
                  else if((i==7)&&(j==4||j==5||j==10||j==11||j==15||j==16||j==18||j==19))
                {
          printf("#   ");
                }
                else if(i==8&&j==20)
                {
                    printf("\n");
                }
                  else if((i==9)&&(j==17))
                {
          printf("#   ");
                }

                else if((i==10)&&(j==16))
                {
          printf("#   ");
                }
                else if((i==11)&&(j==17))
                {
          printf("#   ");
                }
                 else if((i==12)&&(j==16||j==19))
                {
          printf("#   ");
                }
                 else if((i==13)&&(j==17 || j==18))
                {
          printf("#   ");
                }
                else
                    printf("    ");

        }
        printf("\n\n");
    }
    scanf("%d",&i);
}
