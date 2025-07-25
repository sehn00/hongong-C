#include <stdio.h>

int main()
{
    char str[80];

    printf("문자열 입력: ");        // 이때 apple jam 입력
    scanf("%s", str);
    printf("첫 번째 단어: %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);     // s02 참고

    return 0;
}