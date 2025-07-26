#include <stdio.h>
#include <string.h>

int main()
{
    char w1[100], w2[100], w3[100];
    char tmp[100];

    // 단어 입력
    printf("세 단어 입력: ");
    scanf("%s %s %s", w1, w2, w3);

    // 사전순 정렬 (버블 정렬 방식)
    if (strcmp(w1, w2) > 0) {
        strcpy(tmp, w1);
        strcpy(w1, w2);
        strcpy(w2, tmp);
    }

    if (strcmp(w1, w3) > 0) {
        strcpy(tmp, w1);
        strcpy(w1, w3);
        strcpy(w3, tmp);
    }

    if (strcmp(w2, w3) > 0) {
        strcpy(tmp, w2);
        strcpy(w2, w3);
        strcpy(w3, tmp);
    }

    // 결과 출력
    printf("사전 순으로 정렬된 단어:\n");
    printf("%s %s %s\n", w1, w2, w3);

    return 0;
}
