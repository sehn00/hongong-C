#include <stdio.h>

int main()
{
    char animal_1[4][10] = {    // (1) char 상수로 하나씩 초기화...
        {'d', 'o', 'g', '\0'},                  // "dog"
        {'c', 'a', 't', '\0'},                  // "cat"
        {'r', 'a', 'b', 'b', 'i', 't', '\0'},   // "rabbit"
        {'b', 'e', 'a', 'r', '\0'}              // "bear"
    };

    // (2) 문자열 상수로 한 행씩 초기화
    char animal_2[][10] = {"dog", "cat", "rabbit", "bear"};     // 행 수 생략 가능

    // 두 방법으로 선언한 2차원 char배열 각각 출력하기
    int i;
    for (i = 0; i < 4; i++) {
        printf("%s ", animal_1[i]);     // 출력: dog cat rabbit bear
    }
    printf("\n");

    for (i = 0; i < 4; i++) {
        printf("%s ", animal_2[i]);     // 출력: dog cat rabbit bear
    }
    printf("\n");

    return 0;
}