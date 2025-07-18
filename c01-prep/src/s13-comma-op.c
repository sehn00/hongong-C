#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int res = (++a, ++b);       // 콤마 연산자! 여러 표현식 실행 후 마지막 값을 얻고 싶을때 사용
    // (1) ++a 돼서 a=11; (2) ++b 돼서 b=21; (3) res = 21;

    printf("a: %d, b: %d\n", a, b);
    printf("res: %d\n", res);

    return 0;
}