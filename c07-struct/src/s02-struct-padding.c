#include <stdio.h>

struct A {
    char c;     // 1 byte  (+ 3 byte)
    int i;      // 4 byte
    char d;     // 1 byte  (+ 3 byte)
};  // int의 4 byte가 기준이 됨  => 전체 12 byte

struct B {
    char c;     // 1 byte
    int i;      // 4 byte  (+ 3 byte)
    double d;   // 8 byte
};  // double의 8 byte가 기준이 됨  => 전체 16 byte

struct C {  // double의 8 byte가 기준!
    char c1;  short num;  char ch2;         // 1 + (padding 1) + 2 + 1 + (padding 3);
    int score;  double grade;  char ch3;    // 4 + (padding 4);   8;   1 + (padding 7);
};  //  => 전체 32 byte
// 이런 경우에는, 멤버 순서를 조정해서 구조체 전체의 byte수를 줄일 수 있다! EMBSYS SW 에서 중요


int main()
{
    printf("sizeof(struct A) = %zu\n", sizeof(struct A));    // zu: size_t 타입
    printf("sizeof(struct B) = %zu\n", sizeof(struct B));
    printf("sizeof(struct C) = %zu\n", sizeof(struct C));
}

/*
 * 구조체 멤버의 byte 크기가 제각각인 경우,
 * 멤버 사이에 패딩 바이트(padding byte)를 넣어 정렬한다!
 *  -> "byte alignment"
 * 기준은 '가장 큰 멤버'의 바이트 수
*/