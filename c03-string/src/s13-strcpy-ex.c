#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80] = "strawberry";
    char str2[80] = "apple";
    char *ps1 = "banana";
    char *ps2 = str2;

    printf("최초 문자열: %s\n", str1);
    strcpy(str1, str2);     // 다른 char형 배열의 문자열 복사
    printf("첫 번째 바뀐 문자열: %s\n", str1);

    strcpy(str1, ps1);      // 문자열 상수(리터럴)를 복사
    printf("두 번째 바뀐 문자열: %s\n", str1);

    strcpy(str1, ps2);      // 배열을 참조하는 포인터 사용
    printf("세 번째 바뀐 문자열: %s\n", str1);

    strcpy(str1, "banana"); // 문자열 리터럴 복사
    printf("네 번째 바뀐 문자열: %s\n", str1);

    return 0;
}

// 첫 번째 인수: 'char 배열' or '배열명을 저장한 포인터 만 사용가능!'
// 두 번째 인수: 문자열의 시작위치를 알 수 있는 모든 것!