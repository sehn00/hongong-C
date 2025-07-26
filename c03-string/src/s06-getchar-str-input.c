#include <stdio.h>

void my_gets(char *str, int size);

int main()
{
    char str[7];

    my_gets(str, sizeof(str));
    printf("입력한 문자열: %s\n", str);

    return 0;
}

void my_gets(char *str, int size)
{
    int ch, i;

    for (i = 0; i < size - 1; i++)      // 문자열 배열 크기 - 1 만큼 입력 (널문자 공간 남겨놓기)
    {
        ch = getchar();     // s01에서 했지만, getchar() 의 리턴값은 int형이다!
        if (ch == '\n')      // 엔터 치면 '입력 종료'로 판단
            break;
        str[i] = ch;        // int형 ch가, char형 str[i]에 들어갈때, 자동 타입캐스팅된다!
    }

    str[i] = '\0';      // 입력된 문자열 끝에 널문자 저장
}