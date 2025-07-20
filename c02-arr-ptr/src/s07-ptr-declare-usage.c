#include <stdio.h>

int main(void)
{
    int a;
    int *pa;    // int형 데이터를 참조하는 포인터변수 pa 선언

    pa = &a;    // 포인터변수 pa에 &a 주소값 넣음
    *pa = 10;   // 역참조(dereferencing): 포인터변수 pa가 가리키는 값에 10 을 넣는다!

    printf("포인터로 a 값 출력: %d\n", *pa);
    printf("변수명으로 a 값 출력: %d\n", a);

    return 0;
}

// *pa 는
// 대입 연산자(=)의 왼쪽에 올 때는, pa가 가리키는 주소(l-value)에 값을 쓰기(write)
// 오른쪽에 올 때는, pa가 가리키는 주소에 담긴 변수의 값(r-value)을 읽기(read)