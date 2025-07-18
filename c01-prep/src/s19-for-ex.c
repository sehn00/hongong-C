#include <stdio.h>

int main()
{
    int a = 1, i;
    
    for (i = 0; i < 3; i++)     // 3번 반복 (1-> 2-4-8)
    {
        a = a * 2;
    }
    printf("a: %d\n", a);       // 출력: 8

    return 0;
}

// for (초기식; 조건식; 증감식)
// {
//     실행문;
// }