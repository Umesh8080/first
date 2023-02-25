//sorting array
#include<stdio.h>
main()
{
    int a[5],temp=0,i,j;
    printf("enter the array element:");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            if(a[i]<a[j])
           {
         temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }}
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);

}
