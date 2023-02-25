//q 17 find size of structure
#include<stdio.h>
struct std
{
    int a;
    char b;
    float c;
};
int main()
{
    struct std s;
    printf("%d",sizeof(s));
}
