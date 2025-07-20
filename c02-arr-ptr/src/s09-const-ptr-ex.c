#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    const int *pa = &a;     // *pa가 가리키는 변수 a는, *pa의 역참조로 변경할 수 없다
    
    printf("변수 a 값: %d\n", *pa);

    pa = &b;    // pa 주소 바꾸기
    // (번외) *pa = &b; 라고 써야하는거 아니야?   -> 아니다!
    // *pa = &b; 라고 쓰면?  >>> *pa가 역참조하는 변수에 &b 주소값을 넣겠다! 라는 뜻...
    // *pa가 역참조하는 변수는 int형(%d), &b는 주소값(%p)... 타입이 안맞아서 에러가 난다
    printf("변수 b 값: %d\n", *pa);

    pa = &a;
    a = 20;     // *pa = 20; 이었으면 ERROR 발생! const int *pa 로 선언했기 때문
    printf("변수 a 값: %d\n", *pa);

    return 0;
}

// 포인터에 const 사용? 문자열 상수를 인수로 받을때 주로 사용한다