// 1부터 10까지의 합을 재귀호출을 이용하여 출력하기

#include <stdio.h>

int rec_func(int n);

int main()
{
    int result = rec_func(1);

    printf("%d\n", result);
    return 0;
}

int rec_func(int n)
{
    if (n == 10)
        return 10;

    return n + rec_func(n + 1);
}