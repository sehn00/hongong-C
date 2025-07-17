#include <stdio.h>

int main()
{
    short sh = 1234;
    int in = 12345;
    long long lln = 123456;

    printf("short형 변수 출력: %d\n", sh);          // 2byte
    printf("int형 변수 출력: %d\n", in);            // 4byte
    printf("long long형 변수 출력: %lld\n", lln);   // 8byte
    
    // 특별한 경우가 아니면 int 쓰기!
    // short는 메모리를 적게 쓰지만, 연산 과정에서는 int로 변환되므로 실행 속도 저하
    // long long은 메모리 낭비가 큼
    // long 은 간혹 int가 2바이트로 구현된 컴파일러가 있을때 쓰는 4byte짜리 자료형


    unsigned int a = 4294967295;
    printf("%d\n", a);      // 출력: -1

    unsigned int b = -1;
    printf("%u\n", b);      // 출력: 4294967295

    // 둘다 이진수로 전부 111...11 이다!
    // %d 일때는 2's compliment에 따라 -1 이 출력되고
    // %u (unsigned int) 일때는 부호비트를 고려하지 않고 양수 4294967295 가 출력됨
}