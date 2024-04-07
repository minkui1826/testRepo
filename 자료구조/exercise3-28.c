#include <stdio.h>
#include <string.h>

int isin(int *arr, int cnt, int x) {
    for(int j=0; j<cnt; j++) {
        if(arr[j] == x)
            return 1;
    }
    return 0;
}

int main() {
    char text[1000];
    char *tempstr[100];
    int arr[100] = {-1};
    int i = 0, arrcnt = 0;

    printf("Enter Text: ");
    fgets(text, 1000, stdin);
    text[strcspn(text, "\n")] = '\0';

    char *ptr = strtok(text, " ");
    while(ptr != NULL) {
        tempstr[i] = ptr;
        i++;
        ptr = strtok(NULL, " ");
    }

    for(int j=0; j<i-1; j++) {
        for(int k=j+1; k<i; k++) {
            if(strcmp(tempstr[j], tempstr[k]) == 0) {
                if(isin(arr, arrcnt, j) == 0) {
                    arr[arrcnt] = j;
                    arrcnt++;
                }
                if(isin(arr, arrcnt, k) == 0) {
                    arr[arrcnt] = k;
                    arrcnt++;
                }
            }
        }
    }
    for(int j=0; j<arrcnt; j++) {
        tempstr[arr[j]][0] = '\0'; // 문자열의 첫 번째 문자를 null로 설정
    }

    for(int j=0; j<i; j++) {
        if(tempstr[j][0] != '\0') // 빈 문자열이 아닌 경우에만 출력
            printf("%s ", tempstr[j]);
    }

    return 0;
}