//sumof letter of word
#include<stdio.h>
int main()
{
    char a[20];
    int z,i,sum=0;
    printf("enter string:");
   gets(a);
   z=strlen(a);
   for(i=0;i<z;i++)
   {
       if(a[i]>='a'&&a[i]<='z')
        {
       a[i]=a[i]-96;
        }
         else if(a[i]>='A'&&a[i]<='Z')
         {
             a[i]=a[i]-64;
         }
             sum=sum+a[i];
   }
   printf("%d",sum);

}
