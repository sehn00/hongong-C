// 키보드로 입력받은 문자의 아스키 코드 값을 출력하는 프로그램

#include <stdio.h>

int main()
{
    char ch;

    printf("문자를 입력하시오: ");
    ch = getchar();     // getchar()의 리턴값은 int형이랬는데... char ch; 로 선언한 ch에 넣어?
    printf("%c 문자의 아스키코드 값: %d\n", ch, ch);                                    // 후술

    return 0;
}


// char ch;
// ch = getchar();
// 로 하면, int값이 char로 자동 타입캐스팅 된다! 따라서 가능함