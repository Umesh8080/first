 //without header file  can run
   int a,b,c;
main()
{
   printf("enter a and b :");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum:%d",c);
}

//many number of header file valid
    #include<stdio.h>
     #include<stdio.h>
  int a,b,c;
main()
{
   printf("enter a and b :");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum:%d",c);
}

 //use header file anywhere valid
  int a,b,c;
main()
{
   printf("enter a and b :");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum:%d",c);
}
#include<stdio.h>
#include<stdio.h>


//anything written after header file valid
 #include<stdio.h> umesh belle
   int a,b,c;
main()
{
   printf("enter a and b :");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum:%d",c);
}


//inside function not valid
int a,b,c;
main()
{
    #include<stdio.h>
   printf("enter a and b :");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum:%d",c);
}
