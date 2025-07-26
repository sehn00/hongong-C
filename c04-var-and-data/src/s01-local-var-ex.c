#include <stdio.h>

void assign(void);

int main(void)
{
    auto int a = 0;     // auto는 '자동 저장 클래스(auto storage class)'를 의미!
    // 함수 안에서 선언된 지역변수가, 자동으로 스택(stack)에 저장된다는 뜻
    // 사실상 생략되는 키워드이다! 실제로 거의 안씀 (그냥 int a = 0; 과 완전히 동일)
    // 저장 클래스(storage class)란?  >> 후술...

    assign();
    printf("main()함수의 a: %d\n", a);

    return 0;
}

void assign(void)
{
    int a = 10;
    printf("assign()함수의 a: %d\n", a);
}

// 출력
// assign()함수의 a: 10
// main()함수의 a: 0
// => 다른 함수에 같은 이름의 지역변수를 선언해도 충돌하지 않는다!

// 지역변수는 ...
//  - 이름이 같아도, 선언된 함수가 다르면 각각 독립된 저장 공간을 갖는다
//  - 함수가 return 되면, 할당된 저장공간을 자동으로 회수되므로, 메모리 효율적 사용 가능
//  - 디버깅에 유리

// 저장 클래스(storage class)란?
//   : 변수의 생명주기와 저장 위치를 결정하는 키워드
//  - auto: 지역변수(기본값)
//  - register: cpu 레지스터에 저장 요청 ...거의 안쓴대
//  - static: 정적 저장 -> 프로그램 끝날 때까지 값 유지 (자동 초기값 0  //전역변수도 자동 초기값 0 이다)
//  - extern: 다른 파일에 선언된 전역 변수 참조