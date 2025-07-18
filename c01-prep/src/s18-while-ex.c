#include <stdio.h>

int main()
{
    int a = 1;

    while (a < 10)
    {
        a = a * 2;      // 1-2-4-8-16 까지 가고, 16부터는 a < 10 불만족이므로 반복 끝
    }
    printf("%d\n", a);  // 출력: 16

    return 0;
}

// while (조건식)
// {
//     실행문;
// }