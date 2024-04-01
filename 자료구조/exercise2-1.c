#include <stdio.h>
#define COLS 5
#define ROWS 20

int main()
{
    int count=0,sum=0;
    int array[20][5]={{90,84,53,59,52},{26,69,94,39,95},{20,29,58,20,94},{91,10,100,29,29},
                      {19,59,30,59,18},{38,59,60,79,38},{59,69,84,84,86},{4,63,78,45,56},
                      {49,20,19,50,66},{10,50,39,69,19},{20,65,34,67,24},{77,87,68,66,43},
                      {10,12,53,12,56},{67,98,78,55,78},{56,46,88,64,64},{87,95,78,46,89},
                      {100,34,12,99,56},{59,57,98,67,86},{96,59,89,56,95},{89,75,75,97,97}};  //임의 배열

    printf("Average of each subject\n");    //1번 문항
    for(int i=0;i<COLS;i++)
    {
        printf("Subject %d:",i+1);
        sum=0;
        for(int j=0;j<ROWS;j++)
        {
            sum+=array[j][i];     //각 과목당 학생점수 총합
        }
        printf("%.2f\n",(float)sum/20);
    }

    printf("Average of each student\n");  //2번 문항
    for (int i=0;i<ROWS;i++)
    {
        sum=0;
        printf("Student %d:",i+1);
        for (int j=0;j<COLS;j++)
        {
            sum+=array[i][j];   // 각 학생의 과목당 점수 총합
        }
        printf("%.2f\n",(float)sum/5);
        if((float)sum/5<50) count++;  //평균이 50보다 낮을 경우 카운트+1
    }

    printf("Number of students scored below 50 in their average :%d\n",count);  //3번 문항

    printf("Scores of every student\n");   //4번 문항
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%d\t",array[i][j]);   //각 점수 모두 출력
        }
        printf("\n");
    }
}