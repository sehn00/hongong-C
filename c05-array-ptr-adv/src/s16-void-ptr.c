#include <stdio.h>

int main()
{
    int a = 10;
    double b = 3.5;
    void *vp;   // void형 포인터 선언

    vp = &a;        // int형 변수의 주소 저장
    printf("a: %d\n", *(int *)vp);          // vp를 역참조할때는 (int *)형 포인터로 변환 후 사용!

    vp = &b;        // double형 변수의 주소 저장
    printf("b: %.1lf\n", *(double *)vp);    // (double *)형 포인터로 변환 후 역참조!

    return 0;
}