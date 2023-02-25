#include<stdio.h>
int main()
{
    char a[10],b[10];
    gets(a);
    //puts(a);
    putchar('\n');
    int z=strlen(a);
    printf("l==%d",z);
    for(int j=0;j<z;j++)
    {
       int i=(z-j-1);
        b[i]=a[j];
    }
    //printf("%d\n",strcmp(a,b));
    //puts(b);
    //putchar('\n');
    int k=0;
    for(int j=0;j<z;j++)
    {
        if(a[j]==b[j])
        {
            k++;
            //printf("palindrome");
        }
        else
        {
            k--;
        }

    }
    if(k==z)
    {
        printf("palindrome\n\n");
    }
    else{printf("not palindrome\n\n");}
}
