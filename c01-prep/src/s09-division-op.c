#include <stdio.h>

int main()
{
    double a = 5.0 / 2.0;   // 출력: 2.5
    int b = 5 / 2;          // 다 알지만... int니까 2.5 이런거 안됨
    int c = 5 % 2;          // 나머지 연산

    printf("%.1lf, %d, %d\n", a, b, c);

    return 0;
}