#include <stdio.h>
#include <string.h>

typedef struct
{  
    char name[10];
    int marks[3];
    char grade;
}Student;

int main()
{
    Student students[10];
    char name[10];
    int sum_marks=0;

    for(int i=0;i<10;i++)
    {
        printf("Enter name:");
        gets(students[i].name);
        printf("Enter Marks:\n");
        for(int j=0;j<3;j++)
        {
            scanf(" %d",students[i].marks[j]);
        }
        printf("Enter Grade:");
        students[i].grade=getchar();
    }

    printf("Enter Name:");
    fgets(name,10,stdin);
    name[strcspn(name,"\n")]='\0';

    for(int i=0;i<10;i++)
    {
        if(strcmp(students[i].name,name)==0)
        {
            printf("name:%s\n",students[i].name);
            printf("marks:");
            for(int j=0;j<3;j++)
            {
                printf("%d ",students[i].marks[j]);
            }
            printf("\ngrade:%c\n",students[i].grade);
        }
    }

    printf("Students who secured less than 40%% of the aggregate:\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum_marks+=students[i].marks[j];
        }
        if((sum_marks*100)/300 < 40)
        printf("%s\n",students[i].name);
    }

    return 0;
    
}
