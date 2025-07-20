#include <stdio.h>

int main(void)
{
    int a = 10, b = 15, total;
    double avg;

    int *pt = &total;
    double *pg = &avg;
    int *pa = &a;
    int *pb = &b;

    *pt = *pa + *pb;    // total = a + b
    *pg = *pt / 2.0;    // avg = total / 2

    printf("두 정수의 값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균: %.2lf\n", *pg);

    return 0;
}

// 포인터 굳이 안써도 되는 상황이지만... 연습용 예제!