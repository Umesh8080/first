//1st letter upper
#include<stdio.h>
int main()
{
    char a[10];
   int z,i;;
   //a1= strlen(a);
  gets(a);
  a[0]=toupper(a[0]);
  z=strlen(a);
  for(i=0;i<z;i++)
  {
      if(a[i]==' ')
      {
          a[i+1]=toupper(a[i+1]);
      }
  }
  puts(a);

}
