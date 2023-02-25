//print array of element using pointer
/*
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int *p=&a;

    for(int i=0;i<10;i++)
    {
       // p[i]=&a[i];
        printf("value==%d\t address=%d\n",*p,p);
        p++;
    }
}
*/

//cl by referance
/*
#include<stdio.h>
void inc(int *p)
{
    *p=*p+1;
}
int main()
{
    int a=10;
    inc(&a);
    printf("%d\n",a); //a=11 o/p
}
*/
// print value as it
/*
#include<stdio.h>
void inc(int a)
{
    a=a+1; //these 2 a are differents
   //  printf("%d\n",a); //incrment and print a=11
}
int main()
{
    int a=10;
    inc(a);
    printf("%d\n",a); //a=10 o/p
}
*/

