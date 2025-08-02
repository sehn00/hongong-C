#include <stdio.h>

void func(int (*fp)(int, int));     // 함수포인터를 매개변수로 받는 void형 함수 선언
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main()
{
    int sel;

    printf("1. 두 정수의 합\n");
    printf("2. 두 정수의 곱\n");
    printf("3. 두 정수 중에서 큰 값 계산\n");
    printf("원하는 연산의 번호를 입력하세요: ");
    scanf("%d", &sel);

    switch (sel) {
        case 1:
            func(sum);
            break;
        case 2:
            func(mul);
            break;
        case 3:
            func(max);
            break;
    }

    return 0;
}

void func(int (*fp)(int, int))  // int 두개를 매개변수로 받아서 int를 반환하는 함수에 대한 포인터(함수포인터)를
{                               // 매개변수로 받는 함수
    int a, b;                   // -> 즉, func()의 매개변수는 '''int (*fp)(int, int)''' 이다!

    printf("두 정수 값 입력: ");
    scanf("%d%d", &a, &b);
    int res = fp(a, b);         // res에, 전달받은 함수포인터로 가리키는 함수의 리턴값을 저장
    printf("결과값: %d\n", res);
}

int sum(int a, int b)
{
    return (a + b);
}

int mul(int a, int b)
{
    return (a * b);
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}