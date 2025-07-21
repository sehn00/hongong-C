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

// 포인터를 swap하지 않으면, 원본 a,b는 그대로 유지된다 (Call by Value)
// 포인터로 접근하면, 메모리의 '실제 변수'에 접근하기 때문에 값이 직접 바뀜 (Call by Reference)