#include <stdio.h>

int get_num(void);

int main()
{
    int result;
    result = get_num();
    printf("반환값: %d\n", result);

    return 0;
}

int get_num(void)
{
    int num;

    printf("양수 입력: ");
    scanf("%d", &num);

    while (num < 0) {
        printf("양수를 입력하세요: ");
        scanf("%d", &num);
    }

    return num;
}