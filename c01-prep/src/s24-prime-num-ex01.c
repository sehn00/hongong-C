#include <stdio.h>

int main()
{
    int num, i, tmp = 0;
    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            tmp++;
        }
    }

    if (tmp == 1)
    {
        printf("%d 는 소수입니다.\n", num);
    }
    else
    {
        printf("%d 는 소수가 아닙니다.\n", num);
    }

    return 0;
}