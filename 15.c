#include<stdio.h>
int main()
{
    int i;
    char string[3]="MK";
    while(string[i]!='\0')
    {
        i++;
    }
    while(i>0)
    {
        i--;
        printf("%c",string[i]);

    }
}
