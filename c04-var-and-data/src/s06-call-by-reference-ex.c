#include <stdio.h>

void add_ten(int *pa);

int main()
{
    int a = 5;

    add_ten(&a);    // a의 주소를 인수로 전달한다
    printf("a: %d\n", a);   // add_ten()으로 증가된 값 출력! 15

    return 0;
}

void add_ten(int *pa)
{
    *pa += 10;      // int형 포인터 pa가 가리키는 변수의 값 10 증가!
}

// Call by Reference
//   : 변수의 주소를 매개변수로 전달해서, 원래 변수(원본)의 값에 직접 접근하는 방식