//print only alphabet in a string
#include<stdio.h>
int main()
{
   // char a[25]="umesh belle jidaga";
   char a[50],b[50];
   int i,c=0,a1,c1=0;
    printf("enter a and b str:\n");
    gets(a);
    a1=strlen(a);
    for(i=0;i<a1;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            printf("%c",a[i]);
        }
    }
}
