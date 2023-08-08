//polindrome
#include<stdio.h>
int main()
{
   char a[10],b[10],c[10];int s,i;
   gets(a);
   s=strlen(a);    //length of string
   strcpy(c,a);    //store original string
   strcpy(b,strrev(a));
   puts(a);
   puts(c);
   printf("%d",s);
   for(i=0;i<s;i++)
   {
       printf("%c ",c[i]);   //print char by char
   }

   if( strcmp(c,b)==0)    //logic
   {
       printf("yes");
   }
   else
    printf("no");

}
