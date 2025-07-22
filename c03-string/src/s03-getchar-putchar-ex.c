#include <stdio.h>

int main()
{
    int ch;

    printf("문자를 입력하시오: ");
    ch = getchar();     // 입력된 문자(1byte)가 바로 int형 변수에 들어간다?...뭔가 이상하다
    putchar(ch);        // int형 변수를 출력한다?...이것도 이상하다
    putchar('\n');

    return 0;
}


// getchar() 함수의 리턴값은 "int"형이다!
// putchar() 함수의 매개변수는 "int"형이다! (출력은 char형)
//
// int getchar(void) | int putchar(int);
//
// getchar()와 putchar()는 문자와 함께 "입력의 끝(EOF, -1)"도 처리해야 하기 때문...