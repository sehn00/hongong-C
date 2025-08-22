#include <stdio.h>

int main(void)
{
    char small, cap = 'G';

    if ((cap >= 'A') && (cap <= 'Z')) {
        small = cap + ('a' - 'A');      // ASCII 코드 차이를 이용해서 소문자로 변환
    }

    printf("대문지: %c%c", cap, '\n');  // '\n'을 %c로 출력하면 개행된다!
    printf("소문자: %c\n", small);
    
    return 0;
}

// - ASCII 코드 -
// 숫자 '0' ~ '9': 48~57
// 대문자 'A' ~ 'Z': 65~90
// 소문자 'a' ~ 'z': 97~12