#include <stdio.h>

int main()
{
    int a = 1;

    do
    {
        a = a * 2;      // 1-2-4-8-16 (16이면 조건식 만족x, 복ㄱ)
    } while (a < 10);

    printf("a: %d\n", a);

    return 0;
}

// do
// {
//     반복할 문장;
// } while (반복 조건);

// do-while문은 조건식과 간계없이, 반복할 문장을 최소 한번은 실행! 