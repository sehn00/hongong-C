#include <stdio.h>

int sum(int a, int b);

int main()
{
    int (*fp)(int, int);    // 함수포인터 fp 선언

    fp = sum;               // 함수명(sum)을 함수포인터(fp)에 저장
    int res = fp(10, 20);   // 함수포인터(fp)로 함수 호출, 리턴값을 res에 저장
    printf("result: %d\n", res);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}

// 컴파일이 끝나면
// 함수명이, 함수가 올려진 메모리 주소로 바뀐다!
//  -> 함수를 호출할 때 함수명을 사용하면 됨 (함수포인터)

// int sum(int a, int b) 대신 함수포인터를 사용하므로
// 함수포인터를 '''int (*fp)(int, int)''' 로 선언한다
// ( 함수포인터 이름은 꼭 괄호로 묶어야함 (*fp) )