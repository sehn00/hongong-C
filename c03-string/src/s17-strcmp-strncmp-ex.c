#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    puts("과일 이름 2개를 입력하세요: ");
    scanf("%s%s", str1, str2);

    puts("알파벳 순서 느린 과일 이름: ");

    if (strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else if (strcmp(str1, str2) < 0)
        printf("%s\n", str2);
    else
        puts("두 과일은 같습니다.\n");

    return 0;
}

// int strcmp(const char *s1, const char *s2);
// 의 리턴값 부호
//   < 0:   s1 이 s2 보다 알파벳 순서상 먼저임(ASCII 코드 값이 작음)
//   > 0:   s1 이 s2 보다 알파벳 순서상 나중임(큼) 
//  == 0:   두 문자열이 같음

// int strncmp(const char *s1, const char *s2, size_t n);
// 앞에서부터 n글자 까지만 비교!
// 규칙은 strcmp 와 동일