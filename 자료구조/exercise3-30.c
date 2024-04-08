#include <stdio.h>
#include <string.h>

int main()
{
    char STUD[10][10]={"John","Smith","Jessica","Sam","Albert","Brian","Kim","Dani","Eric","Peter"};
    char deletename[10];
    char temp[10];
    

    printf("Enter Name to Delete:");
    fgets(deletename,10,stdin);
    deletename[strcspn(deletename, "\n")] = '\0';

    for (int i=0;i<10;i++)
    {
        if(strcmp(STUD[i],deletename)==0)
        {
            STUD[i][0]='\0';
            break;
        }
    }

    for (int i = 0; i<10-1; i++) {
        for (int j = i+1; j < 10; j++) {
            if (strcmp(STUD[i], STUD[j])>0) 
            {	// 사전순서대로 되어있지 않으면 두 문자열의 위치를 바꿔준다.
                strcpy(temp, STUD[i]);	// 바꿀 때 임시로 temp에 저장한다.
                strcpy(STUD[i], STUD[j]);
                strcpy(STUD[j], temp);
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%s\n",STUD[i]);
    }
    return 0;
}