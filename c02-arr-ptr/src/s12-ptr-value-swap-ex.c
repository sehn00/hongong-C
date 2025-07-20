#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;
    printf("swap 이전 a: %d, b: %d\n", a, b);

    swap(&a, &b);
    printf("swap 이후 변수값 출력\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}