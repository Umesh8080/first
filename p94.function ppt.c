/*
//Function with the return and with arguments
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int result=divi(50,5);
    printf("Divided value: %d\n",result);
    getch();
    return 0;
}
int divi(int a, int b)
{
    int temp=a/b;
    return temp;
}

//Function with return value and without argument
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("answer is:%d",mul());
    getch();
    return 0;
    }
    int mul() {
        int f_no=12;
        int s_no=22;
        int multi;
        multi=f_no*s_no;
        return(multi); }


         //Function with no return value and with the argument
#include <stdio.h>
#include <stdlib.h>
void main()
{
diff(25,15);//calling function with arguments
getch();
    return 0;
}
void diff(int a,int b)//argument is passed to this function
{//void data type never return value from function
     int c=a-b;
     printf("different between numbers (a-b) is %d\n",c);
}



//Function with no return value and without argument
#include <stdio.h>
#include <stdlib.h>
void add();
int main() {
    add();
    getch();
    return 0;
    }
    void add() {
        int a=10;
        int b=12;
        int c=a+b;
        printf("Total value of(a+b) is :%d\n",c); }

*/

// with return and with argument
#include <stdio.h>
int add();
int main()
{
    int a=5,b=10,result;
    result=add(a,b);
    printf("%d",result);
}
    int add(int a,int b)
    {
        int c=a+b;
         return c;
    }
//with return and without argument
#include <stdio.h>
int add();
int main()
{
    int result;
    result=add();
    printf("%d",result);
}
    int add()
    {
        int a=5,b=10,c;
         c=a+b;
         return c;
    }

//without return and with argument
#include <stdio.h>
void add();
int main()
{
    int a=5,b=10,result;
    add(a,b);
}
    void add(int a,int b)
    {
        int c=a+b;
         printf("%d",c);
    }

 //without return and without argument
 #include <stdio.h>
void add();
int main()
{
    add();

}
    void add()
    {
    int a=5,b=10;
        int c=a+b;
     printf("%d",c);
    }



//Call by Value Example: Swapping the values of the two variables
#include<stdio.h>
 void swap(int , int); //prototype of the function
int main()
{
 int a = 10;
 int b = 20;
  swap(a,b);
 printf("after function call:a = %d, b = %d\n",a,b);
}
 void swap (int a, int b)
 {
 int temp;
 temp = a;
 a=b;
b=temp;
 printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters,
 }

Output
After swapping values in function a = 20, b = 10
After swapping values in main a = 10, b = 20



//call by value
1. #include<stdio.h>
2. void change(int num) {
3. printf("Before adding value inside function num=%d \n",num);
4. num=num+100;
5. printf("After adding value inside function num=%d \n", num);
6. }
7. int main() {
8. int x=100;
9. printf("Before function call x=%d \n", x);
10. change(x);//passing value in function
11. printf("After function call x=%d \n", x);
12. return 0;
13. }
Output
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=100



//Call by reference Example: Swapping the values of the two variables
 #include <stdio.h>
 void swap(int *, int *); //prototype of the function
 int main()
  {
 int a = 10;
  int b = 20;
 printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main
 swap(&a,&b);
 printf("After swapping values in main a = %d, b = %d\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20
 }
 void swap (int *a, int *b)
 {
 int temp;
 temp = *a;
 *a=*b;
*b=temp;
printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a =b = 10
 }
Output
Before swapping the values in main a = 10, b = 20
After swapping values in function a = 20, b = 10
After swapping values in main a = 20, b = 10



//call by referance
#include<stdio.h>
2. void change(int *num) {
3. printf("Before adding value inside function num=%d \n",*num);
4. (*num) += 100;
5. printf("After adding value inside function num=%d \n", *num);
6. }
7. int main() {
8. int x=100;
9. printf("Before function call x=%d \n", x);
10. change(&x);//passing reference in function
11. printf("After function call x=%d \n", x);
12. return 0;
13. }
Output
Before function call x=100
Before adding value inside function num=100
After adding value inside function num=200
After function call x=200




//passing structure as an arguments
#include <stdio.h>
struct student
{
   char name[50];
   int age;
   int per;
};

//void display(int a, int b);
int main()
 {
   struct student s1;

   printf("Enter name: ");
   gets(s1.name);
   printf("Enter the age: ");
   scanf("%d",&s1.age);
   printf("Enter percentage: ");
   scanf("%d", &s1.per);
   display(s1.age,s1.per);
}

void display(int a, int b )
 {
   printf("output\n");
   printf("Roll number: %d", a);
   printf("\nPercentage: %d", b);
}

//passing pointer as arguments
#include <stdio.h>
int main()
{
    int salary=0, bonus=0,s;
    printf("Enter the employee current salary:");
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    s=hike(&salary, &bonus);
    printf("Final salary: %d", s);
}
int hike(int  *sallery, int *bonus)
{
    return *sallery+*bonus;
}




// Program to calculate the sum of array elements by passing to a function
#include <stdio.h>
int Sum(int a[]);

int main()
 {
  int result, a[] = {1, 2, 3, 4, 5, 6};

  // num array is passed to calculateSum()
  result = Sum(a);
  printf("Result = %d", result);
}

int Sum(int a[])
{
  int sum = 0;

  for (int i = 0; i < 6; ++i)
    {
    sum =sum+ a[i];
  }

  return sum;
}

//passing string as an arguments
#include <stdio.h>
int main()
{
	char a[20]="Hello Function";
	fun(a);
}
void fun(char *p)
{
    printf("The String is : %s",p);
}
