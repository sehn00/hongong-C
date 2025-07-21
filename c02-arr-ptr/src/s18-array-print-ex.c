// 세 번째 배열 요소부터 마지막 배열 요소까지 출력하는 프로그램

#include <stdio.h>

int main()
{
    int i;
    double ary[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
    double* pb = &ary[2];

    for (i = 0; i < 3; i++)
    {
        printf("%.1lf ", *pb);
        pb++;
    }
    printf("\n");

    return 0;
}