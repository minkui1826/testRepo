#include <stdio.h>

typedef struct
{  
    char name[10];
    int marks[3];
}Student;

int main()
{
    Student students[10];
    int sum;
    int all_sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter name:");
        gets(students[i].name);
        printf("Enter Marks:\n");
        for(int j=0;j<3;j++)
        {
            scanf(" %d",students[i].marks[j]);
        }
    }

    for(int i=0;i<10;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=students[i].marks[j];
            
        }
        all_sum+=sum;
        printf("%s average:%.2f",students[i].name,(float)sum/3);
    }
    printf("Class Average: %.2f",(float)all_sum/30);

    return 0;
    
}