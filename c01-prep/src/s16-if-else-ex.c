#include <stdio.h>

int main()
{
    int a, b;
    printf("정수 a, b를 입력하시오: ");
    scanf("%d%d", &a, &b);

    if (a > 10)
    {
        if (b >= 0)
        {
            b = 1;
        }
        else
        {
            b = -1;
        }
    }
    printf("a: %d, b: %d\n", a, b);

    return 0;
} 