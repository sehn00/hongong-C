#include <stdio.h>

int *sum(int a, int b);

int main()
{
    int *resp;      // 리턴값 저장할 포인터변수(result ptr) 선언

    resp = sum(10, 20);
    printf("두 정수의 합: %d\n", *resp);    // 출력: 30

    return 0;
}

int *sum(int a, int b)  // int형 포인터변수 반환
{
    static int res;     // static int를 써야, sum() 함수가 끝나도 메모리에 남고, 리턴할때 문제 안생김
    res = a + b;        // 그냥 int를 쓰면? sum() 함수가 끝나면 res는 스택에서 사라짐
                        // 사라진 변수의 주소를 return 하고, 그 주소를 통해 값을 사용하면 -> 위험하다!!(UB 발생)
    return &res;        //   => 일반 지역변수의 주소는, return해서 다른 함수에서 사용하면 안된다!
}