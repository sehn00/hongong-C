#include <stdio.h>

int main()
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);   // asd를 입력(엔터)하면? >> 표준입력버퍼에 'a','s','d','\n' 저장됨
        printf("%c", ch);   // 입력 없어도 버퍼에 남은 데이터가 있으면 >> 다음 루프에서 즉시 처리된다!
    }

    printf("\n");

    return 0;
}

// asd엔터 치면, 바로 asd가 출력됨
// tiger엔터 치면, 바로 tig가 출력됨