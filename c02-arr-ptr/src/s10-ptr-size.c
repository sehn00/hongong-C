#include <stdio.h>

int main()
{
    char ch; int in; double db;

    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %d\n\n", sizeof(&db));

    printf("char* 포인터변수 크기: %d\n", sizeof(pc));      // 64bit OS에서는 포인터변수 크기 = 8byte
    printf("int* 포인터변수 크기: %d\n", sizeof(pi));       // 주소값이 8byte 이다 = 16진수 2개가 1byte이므로
    printf("double* 포인터변수 크기: %d\n\n", sizeof(pd));  // 주소는 0x 0000 0000 0000 0000 꼴이다

    printf("char* 포인터가 가리키는 변수 크기: %d\n", sizeof(*pc));
    printf("int* 포인터가 가리키는 변수 크기: %d\n", sizeof(*pi));
    printf("double* 포인터가 가리키는 변수 크기: %d\n", sizeof(*pd));

    return 0;
}