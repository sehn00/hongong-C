#include <stdio.h>

void add_ten(int a);

int main()
{
    int a = 5;

    add_ten(a);     // a를 인수로 전달
    printf("a: %d\n", a);   // add_ten()으로 증가된 값 출력.. 하려고 했지만 여전히 5

    return 0;
}

void add_ten(int a)
{
    a += 10;
}

// Call by Value
//   : 값을 복사해서 함수에 전달하는 방식 (원본은 건드리지 않는다)

// 코드에서,
//  - add_ten(a) 의 a는, main()의 a와는 다른 별개의 변수
//  - a += 10; 을 해도, main()의 a는 여전히 5