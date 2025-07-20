#include <stdio.h>

int sum(int x, int y);      // 프로토타입 선언!

int main()
{
    int a = 10, b = 20, result;
    result = sum(a,b);
    printf("sum = %d\n", result);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}