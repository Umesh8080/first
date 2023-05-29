#include<stdio.h>
struct student
{
    int id;
    float per;
};
void fun(struct student *record);
int main()
{
    struct student record;
    record.id=1;
    record.per=90.34;
    fun(&record);
    return 0;
}
void fun(struct student *record)
{
    printf("id is:%d\n",record->id);
    printf("per is:%0.2f",record->per);
}
