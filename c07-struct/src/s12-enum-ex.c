#include <stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER, };    // 열거형 선언

int main()
{
    enum season ss;     // 열거형 변수 ss 선언
    char *pc = NULL;    // 문자열 저장할 포인터

    ss = SPRING;
    
    switch (ss) {
        case SPRING:    // 0
            pc = "inline";
            break;
        case SUMMER:    // 1
            pc = "swimming";
            break;
        case FALL:      // 2
            pc = "trip";
            break;
        case WINTER:    // 3
            pc = "skiing";
            break;
    }

    printf("나의 레저 활동 => %s\n", pc);

    return 0;    
}

/* ''' 열거형 (enum) '''
 * enumeration(열거)의 약어
 *
 * enum season { SPRING, SUMMER, FALL, WINTER, };
 *  -> enum 열거형이름 { 열거형 변수에 저장할 수 있는 기호화된 정수 값들 };
 * 
 * 컴파일러는 멤버를 0 부터 차례로 하나씩 정수로 바꾼다!
 * (예) SPRING=0, SUMMER=1, FALL=2, WINTER=3
 * 
 * enum season { SPRING = 5, SUMMER, FALL = 10, WINTER, };  으로 초기값 설정 가능
 * 이때 초기값 없는 멤버는, 이전 멤버보다 하나씩 큰 정수가 됨 (SUMMER=6, WINTER=11)
 */