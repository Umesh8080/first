#include<stdio.h>
int main()
{
    int i = 0;
    int x = 6;
    do
    {

        i += i;
        printf("%d\n",i);
        i++;

    }
    while (i <= x);
    return 0;
}
