/*#include<stdio.h>
int main()
{
    char a;
    a=getchar(); //print only 1 char
    putchar(a);
}*/
/*#include<stdio.h>
int main()
{
    char a[10];
    gets(a); //print string
    puts(a);
}*/
/*#include<stdio.h>
int main()
{
    char a;
   a=getch(); //hold  the output screen
    putch(a);
}*/
#include<stdio.h>
int main()
{
    char a[10],b[10];
    int z;
    gets(a); //print string
    gets(b);
  printf("len=%d\n",strlen(a));
 printf("add=%s\n",strcat(a,b));
 printf("cmp=%d\n",strcmp(a,b));
  printf("upr=%s\n",strupr(a));
 printf("copy=%s\n",strcpy(a,b));
 printf("upr=%s\n",strupr(b,a));
 printf(puts(a));
    }
