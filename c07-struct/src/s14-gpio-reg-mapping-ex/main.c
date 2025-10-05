#include "gpio.h"

int main(void)
{
    // (1) GPIOA 클럭 활성화
    RCC_AHB1ENR |= (1U << 0);   // AHB1ENR 의 GPIOAEN 비트
    // 0b0000...0001 과 OR 연산, 따라서 RCC_AHB1ENR = 0b0000...0001, set 된다

    // (2) GPIOA pin5 를 출력으로 설정
    GPIOA->MODER   &= ~(0x3U << (5U * 2U));     // 클리어
    GPIOA->MODER   |=  (0x1U << (5U * 2U));     // 출력 모드로 설정

    // (3) LED 토글 (BSRR 방식)
    while(1) {
        // LED ON
        GPIOA->BSRR = (1U << 5);
        delay(100000);  // CPU 클럭 주파수의 몇(3~5)배수 * 100000 만큼 딜레이

        // LED OFF
        GPIOA->BSRR = (1U << (5 + 16));
        delay(100000);
    }
}


/*
MODER 레지스터는 pin모드를 2bit 씩 관리함
5번 pin은, 5*2 = 10~11번째 비트
- 00 = 입력
- 01 = 출력
- 10 = 대체 기능(AF)
- 11 = 아날로그
*/

// a |= b;   ==   a = a | b;
// a &= b;   ==   a = a & b;

