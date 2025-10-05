#ifndef GPIO_H      // 헤더 가드(Header Guard) 시작: 만약 GPIO_H 가 정의되어있지 않다면,
#define GPIO_H      //  -> GPIO_H 를 정의한다!

#include <stdint.h>     // 고정너비 정수 타입(uint32_t, int16_t 등)을 쓰기 위해 추가

// GPIO 레지스터 맵  -> 구조체로 정의
typedef struct {
    volatile uint32_t MODER;   // 모드 (입력/출력/대체/아날로그)
    volatile uint32_t OTYPER;  // 출력 타입 (푸시풀/오픈드레인)
    volatile uint32_t OSPEEDR; // 출력 속도
    volatile uint32_t PUPDR;   // 풀업/풀다운
    volatile uint32_t IDR;     // 입력 데이터
    volatile uint32_t ODR;     // 출력 데이터
    volatile uint32_t BSRR;    // 비트 set/reset (set=하위16bit / reset=상위16bit)
    volatile uint32_t LCKR;    // Lock 레지스터
    volatile uint32_t AFRL;    // 대체 기능 low
    volatile uint32_t AFRH;    // 대체 기능 high
} GPIO_TypeDef;
// '''volatile''' 키워드로, 멤버 변수값이 예기치 않게 바뀔수 있음을 컴파일러에게 알림, "항상 메모리에서 읽고 써라"
//  => HW 레지스터 접근, interrupt 핸들러, 멀티스레드 환경 등에서 활용!

// GPIO 베이스 주소
#define GPIOA ((GPIO_TypeDef *) 0x40020000UL)   // UL = Unsigned Long int 리터럴 접미사
#define GPIOB ((GPIO_TypeDef *) 0x40020400UL)   // 필요하면 더 추가
// MCU 데이터시트에 정의된 GPIOA, GPIOB의 베이스 주소를 구조체포인터로 매핑한 것!

// RCC (클록 enable을 위한 매크로)
#define RCC_BASE    0x40023800UL
#define RCC_AHB1ENR (*(volatile uint32_t *)(RCC_BASE + 0x30UL))
    // (RCC_BASE + 0x30UL) → RCC 레지스터 집합에서 AHB1ENR 레지스터의 주소
    // (volatile uint32_t *) → 그 주소를 32비트 레지스터 포인터로 변환
    // *( ... ) → 역참조
// 즉, RCC_AHB1ENR은 RCC_AHB1ENR 레지스터 자체를 뜻한다! ("RCC AHB1 peripheral clock enable register")

// gpio.c 에 정의한 함수 프로토타입
void gpio_pin_set(GPIO_TypeDef *port, uint32_t pin);
void gpio_pin_reset(GPIO_TypeDef *port, uint32_t pin);

#endif  // GPIO_H    -> 헤더 가드(Header Guard) 끝: 여기까지 포함



/****번외1: 고정너비 정수 타입(Fixed-width integer types) *************************
-> #include <stdint.h> 를 추가해서 사용!

정확한 비트수 (Exact-width types)
- int8_t : 부호 있는 8비트 (–128 ~ 127)
- uint8_t : 부호 없는 8비트 (0 ~ 255)
- int16_t, uint16_t
- int32_t, uint32_t
- int64_t, uint64_t

최소 비트수 (Minimum-width types)
- int_least8_t : 최소 8비트 이상 보장 (더 클 수도 있음)
- int_least16_t, … (이런 식으로 존재)

가장 빠른 타입 (Fastest minimum-width types)
- int_fast8_t : 8비트 이상을 표현할 수 있는 가장 빠른 타입
(예: 어떤 CPU에서는 32비트 연산이 더 빠르면 int_fast8_t가 사실상 32비트가 될 수도 있음)

포인터 크기와 같은 타입
- intptr_t : 포인터를 담을 수 있는 정수 타입
- uintptr_t : 부호 없는 버전

********************************************************************************/


/****번외2: 헤더 가드(Header Gaurd) ****************************************************************
 * 하나의 헤더파일이 여러번 포함되면, 컴파일 에러 발생할 수 있음
 * 이를 막기 위해 '''#ifndef ~ #define ~ #endif''' 구조를 넣어서 한번만 포함되도록 함
 * main.c 에서 #include "gpio.h"  -> GPIO_H 가 아직 정의 안되어있으니, 헤더가드에 의해 GPIO_H 가 정의됨
 * 이 다음에 다시 #include "gpio.h" 가 있다면  -> GPIO_H 가 정의되어있으니, 헤더가드 내부 내용이 전부 무시됨
 **************************************************************************************************/


/****번외3: 매크로(macro) ***************
 * 매크로 = #define 으로 만드는 치환 규칙
 * (예1) #define PI 3.14159
 * (예2) #define RCC_BASE 0x40023800UL
 **************************************/

