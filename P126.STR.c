
   ## STRUCTURES 15-07-2023##
 -----------------------------
//I.declaration of structure
#include<stdio.h>
struct student  //student is structure name or tag name
{
    int rollno;
    char name[20];
    float marks;
};

---*---*---*---

//II.intilization of structure compile time
1.
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
} s1= {12,"umesh",80.5};
int main()
{
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
2.
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;
    char name[20];
    float marks;
};
struct student s1= {12,"umesh",80.5};   //global declaration so can access in any of function out of 10 functions
int main()
{
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
3.
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1= {12,"umesh",80.5};   //locally declared scope is within a main function only
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
4.
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    s1.rollno=12;
    //s1.name="umesh";  not valid name is not assign
    strcpy(s1.name,"umesh");  //value assign using strcpy()
    s1.marks=80.5;
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
5.partial intilization
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1= {80.5};   //1st number assign to 1st structre member other structure print default value char=NULL float=0
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}

6.Run time initialization
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    scanf("%d",& s1.rollno);
    scanf("%s",s1.name);      //only for without space name can scan . with space name using gets()
    scanf("%f",&s1.marks);
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}

//drawback of structure
#include<stdio.h>
struct
{
    int a;
    float b;
} s1= {1,5.5},s2= {2,5.6}; //compulsory declared if structure tagname not means
int main()
{
    struct s3; //not valid because of structure tagname not present
}

7.initialization different forms
#include<stdio.h>
struct umesh
{
    int r;
    char name[20];
    float m;
} s1= {1,"umesh",5.5},s2= {2,"belle",5.6},s3= {3.5}; //3.5 assigned to int r
int main()
{
    printf("s1 info:%d %s %f\n",s1.r,s1.name,s1.m);

    printf("s2 info:%d %s %f\n",s2.r,s2.name,s2.m);

    printf("s3 info:%d %s %f",s3.r,s3.name,s3.m);  //by default name and m take
}

---*---*---*---

//III.Array of structure
1.
#include<stdio.h>
struct student   //globally declared structure
{
    int rollno;       //4 byte length 1000 adress
    char name[20];   //20 byte lenght 1004 adress
    float marks;     //4 byte length 1024 adress
};
int main()
{
    struct student s1[3];   //to hold multiple student data
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%d%s%f",&s1[i].rollno,s1[i].name,&s1[i].marks);  //base adress of s1[i] is 1000
    }
    for(i=0; i<3; i++)
    {
        printf("%d %s %f\n",s1[i].rollno,s1[i].name,s1[i].marks);
    }
}
//2.persons data printing
#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float weight;
};
int main()
{
    struct person s[10];
    int n,i;
    printf("enter number of persons:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("enter data of %d person:\n",i);
        printf("enter name:");
        scanf("%s",&s[i].name);
        printf("enter age:");
        scanf("%d",&s[i].age);
        printf("enter weight:");
        scanf("%f",&s[i].weight);
        printf("\n");
    }
    printf("\nPERSONS:\n");
    for(i=1; i<=n; i++)
    {
        printf("name:%s\n",s[i].name);
        printf("age:%d\n",s[i].age);
        printf("weight:%.1f\n",s[i].weight);
        printf("\n");
    }
}

---*---*---*---

//IV.structure to pointer
1.
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;  //pointer of datatype struct person
    struct student  *ptr;  //ptr is adress of variable whose data type is struct student
    ptr=&s1;
    s1.rollno=12;
    strcpy(s1.name,"umesh");
    s1.marks=80.5;
//    strcpy(ptr->name,"belle");          //(*ptr).name
//    ptr->age=12;                          //(*ptr).a
//    ptr->weight=2.5;                         //(*ptr).b
    printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->marks);
}
//2.structure pointer passing to function
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;  //pointer of datatype struct person
    s1.rollno=12;
    strcpy(s1.name,"umesh");
    s1.marks=80.5;
    fun(&s1);
}
void fun(struct student *ptr)
{
    printf("%d %s %.2f\n",ptr->rollno,ptr->name,ptr->marks);

}

//3.structure passing to function
#include<stdio.h>
void fun();
struct student
{
    char name[20];
    int rno;
    float per;
};

int main()
{
    struct student s[2];  //local initilization only throughout the main()
    int i;
    for(i=1; i<=2; i++)
    {
        printf("enter %d details\n",i);
        printf("enter name:");
        scanf("%s",&s[i].name);

        printf("enter rno:");
        scanf("%d",&s[i].rno);

        printf("enter per:");
        scanf("%f",&s[i].per);
    }

    for(i=1; i<=2; i++)
    {
        fun(s[i]);
        printf("\n");
    }
}
void fun(struct student s1)
{
    printf("%s  ",s1.name);
    printf("%d  ",s1.rno);
    printf("%f  ",s1.per);
}

---*---*---*---

//V.nested structure
1.
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    struct
    {
        float marks;
    } s1;
} s2;
int main()
{
    s2.rollno=12;
    strcpy(s2.name,"umesh");
    s2.s1.marks=80.5;
    printf("%d %s %.2f",s2.rollno,s2.name,s2.s1.marks);
}

//2.nested structure
#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
} ;
struct student1
{
    struct student s1;
    float marks;
} s2;
int main()
{
    s2.s1.rollno=12;
    strcpy(s2.s1.name,"umesh");
    s2.marks=80.5;
    printf("%d %s %.2f",s2.s1.rollno,s2.s1.aname,s2.marks);
}

---*---*---*---

//VI.size of struct
#include<stdio.h>
int main()
{
    struct umesh
    {
        int a:2;
        int b:5;
        int c:10;
    } d;
    printf("%d",sizeof(d));  //output 4 bytes 2+5+10
}

--------------------------------------------------------------------------------------------------
EX:1.
#include<stdio.h>
 typedef struct student
{
    int rollno;
    char name[20];
    float marks;
} stu;
int main()
{
stu   s1={12,"umesh",5.6};   //stu=datatype ,s1=var name
//s1.rollno=12;
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
EX:2.
 #include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
} s1;
int main()
{
     s1 = {12};      //error because use full name of datatype
   // s1.rollno=12;
  //  strcpy(s1.name,"umesh");           //correct form for single
  //  s1.marks=99;
    printf("%d %s %f",s1.rollno,s1.name,s1.marks);
}
