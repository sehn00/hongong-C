#include <stdio.h>

int main()
{
    int a = 10, b = 20, res;

    res = (a > b) ? a: b;
    // (조건식)이 참이면? a; 거짓이면? b  >>> 결국 res엔 큰 값이 들어간다
    printf("큰 값: %d\n", res);

    return 0;
}