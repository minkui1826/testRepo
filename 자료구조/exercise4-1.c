#include <stdio.h>

typedef struct
{
    char firstname[20];
    char middelname[20];
    char lastname[20];
}Name;

typedef struct
{
    int day;
    int month;
    int year;
}Date;

typedef struct
{
    int english;
    int math;
    int comsci;
}Marks;

typedef struct
{
    int roll_number;
    Name name;
    char sex;
    Date date;
    Marks marks;
}Student;



int main()
{
    Student s1;
    
    return 0;
}