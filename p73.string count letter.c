//count a letters for each word of sentence
#include<stdio.h>
int main()
{
    char a[50];
    int z,i,j,k,c=0,h=0;
    printf("enter string:");
    gets(a);
    z=strlen(a);
    //printf("%d",z);
     k=0;
     int b[h];
    for(j=0;j<z;j++)
     {
            c++;

                if(a[j]!=' ')
                {
                        printf("%c",a[j]);
                }

                else if(a[j]==' ')
                {

                    printf("-->%d\n",c-1);
                c=0;
                }
               }
           printf("-->%d\n",c);
}
