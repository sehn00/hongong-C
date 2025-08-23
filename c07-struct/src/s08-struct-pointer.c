#include <stdio.h>

struct score {
    int kor;
    int eng;
    int math;
};

int main()
{
    struct score sehn = { 90, 80, 70, };
    struct score *ps = &sehn;   // 구조체포인터변수 ps에 주소 저장
    
    printf("국어: %d\n", (*ps).kor);    // 구조체포인터로 멤버 접근
    printf("영어: %d\n", ps->eng);      // ->연산자 사용
    printf("수학: %d\n", ps->math);

    return 0;
}

// (*ps).kor 과 ps->kor 는 같다!
//
// '.': 구조체변수의 멤버에 접근
// '->': 구조체포인터의 멤버에 접근