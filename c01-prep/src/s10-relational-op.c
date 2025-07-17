#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int bl;     // T/F를 1 또는 0 으로 저장할 int형 변수
    // true, false로 쓰고싶으면 -> #include <stdbool.h> 추가

    bl = (a > b);
    printf("a > b: %d\n", bl);     // 거짓, 0
    bl = (a < b);
    printf("a < b: %d\n", bl);     // 참, 1
    bl = (a == b);
    printf("a == b: %d\n", bl);     // 거짓, 0
    bl = (a != b);
    printf("a != b: %d\n", bl);     // 참, 1

    return 0;
}