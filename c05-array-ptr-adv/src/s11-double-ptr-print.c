#include <stdio.h>

void print_str(char **pps, int cnt);

int main()
{
    char *ptr_ary[] = {"eagle", "tiger", "lion", "squirrel"};   // 문자열 저장하는 배열
    // 배열 요소 == char*형 포인터 (문자열 리터럴을 저장하는 주소)
    // ptr_ary == char*형 포인터를 담은 배열의 이름(= 주소) == char*[] 또는 char**형 -> 이중포인터로 접근가능!

    int cnt = sizeof(ptr_ary) / sizeof(ptr_ary[0]);     // 배열 요소 수

    print_str(ptr_ary, cnt);

    return 0;
}

void print_str(char **pps, int cnt)     // 이중포인터로 접근
{
    for (int i = 0; i < cnt; i++) {
        printf("%s\n", pps[i]);     // ptr_ary[0], ptr_ary[1], ... 등을 출력! 문자열이 출력된다
    }
}