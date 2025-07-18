#include <stdio.h>

int main()
{
    // 비트연산자: &, |, ^, ~, <<, >>
    int a = 10;     // 00000000 00000000 00000000 00001010
    int b = 12;     // 00000000 00000000 00000000 00001100

    printf("a & b: %d\n", a & b);       // 비트 끼리 and
    printf("a | b: %d\n", a | b);       // or
    printf("a ^ b: %d\n", a ^ b);       // xor
    printf("~a: %d\n", ~a);             // not (부호비트가 1이 되므로 결과는 음수)
    printf("a << 1: %d\n", a << 1);     // LSL 1
    printf("a >> 2: %d\n", a >> 2);     // LSR 2

    return 0;
}