#include <stdio.h>

int main()
{
    char ch1, ch2;

    printf("2개의 문자 입력: ");
    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);

    return 0;
}


// 이미 공부했지만
//
// c02-s21 에서
// 26번 째 줄에서 scanf 처리되는 방식...?
// =>
// scanf 는 매 실행마다 입력을 받는게 아니라,
// '''입력 버퍼에 남아 있는 값을 소모하는 함수이다!'''

// 첫 번째 루프에서 입력버퍼에 1.0 2.0 3.0 4.0 5.0 을 남기면
// "입력 구분자(White space: 공백, 탭, 엔터)"를 기준으로 잘라서 순서대로 가져간다!
// 라고 했던건
// %d, %lf, %s: 문자열, 숫자 입력에서만!

// 여기서의 %c 의 문자 입력에서는 White space 도 %c 로 할당되어버린다