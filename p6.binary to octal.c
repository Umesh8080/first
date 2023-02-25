#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,r,dec=0,p,i,z,a1,t,a2[8];
    printf("enter the binary number:");
    scanf("%d",&a);
    a1=a;
    t=z;
    while(a>0)

{
       // r=a%10;
        a=a/10;
        c++;
}
    for(i=0;i<c;i++)
    {
        t=a1%10;
        a1=a1/10;
        p=pow(2,i)*t;
        dec=dec+p;
}
printf("The decimal value : %d\n",dec);
int k=dec,flag=0;
    while(dec>0)
    {
        dec=dec/8;
        flag++;
       // c++;
    }
   // printf("%d\n",flag);
for(i=0;k>0;i++)
    {
        a2[i]=k%8;
        k=k/8;
       //printf("%d\t",a2[i]);
    }
   // printf("%d",a2[i])
//printf("\n");
printf("The octal value is:");
    for(i=flag-1;i>=0;i--)
    {
    //printf("%d \t %d\n",i,a2[i]);
    printf("%d",a2[i]);
    }
    printf("\n");
}

