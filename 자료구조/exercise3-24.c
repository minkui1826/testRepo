#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    char lines[100][100];
    int numLines = 0;
    char input[100];

    printf("Input Employee Names (press Enter twice to stop):\n");

    // 여러 줄의 문자열 입력받기
    while (1) {
        if (fgets(input, 100, stdin) == NULL) {
            break; // 입력이 없으면 종료
        }

        // 개행 문자 제거
        input[strcspn(input, "\n")] = '\0';

        // 입력된 문자열이 빈 문자열이면 종료
        if (strlen(input) == 0) {
            break;
        }

        // 입력된 문자열을 lines 배열에 저장
        strcpy(lines[numLines++], input);
    }

    // 입력된 문자열 출력
    printf("Employee Names:\n");
    for (int i = 0; i < numLines; i++) {
        printf("%s\n", lines[i]);
    }

    return 0;
}