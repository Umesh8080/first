//print an string without spaces
#include<stdio.h>
int main()
{
   // char a[]="umesh belle jidaga";
   char a[50];
    int i,a1;
    gets(a);
    a1=strlen(a);
    for(i=0;i<a1;i++)
    {
        if(a[i]==' ')
        {
            continue; //it will skip that character
        }
        printf("%c",a[i]);
    }
}
