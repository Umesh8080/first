#include<stdio.h>
int main()
{
    char a[10];
    int i,b;
    gets(a);
    b=strlen(a);
    for(i=b-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
