//print brigosha 50 times without loop
#include<stdio.h>
void string(char a[], int count)
{
    printf("%s",a);
    count=+1;
    if(count<10)
    string(a,0);

}
int main()
{
    char a[500],count=0;
    printf("enter your character :");
    scanf("%s",a);
    string(a,count);
}
