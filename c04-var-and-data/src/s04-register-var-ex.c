#include <stdio.h>

int main(void)
{
    register int i;     // register 지역변수 선언
    auto int sum = 0;   // auto 지역변수 선언, 초기화

    for (i = 1; i <= 10000; i++)
        sum += i;
    
    printf("sum = %d\n", sum);

    return 0;
}

// 레지스터 지역변수는... 지금은 거의 안쓰인다
// 컴파일러가 어떤 변수를 레지스터에 넣을지 더 잘 판단하기 때문 (gcc의 최적화 옵션이 더 강력)
// register는 just 요청일 뿐, 강제도 아니다

// 그래도 굳이 쓰겠다면 (이마저도 말리고 싶지만)
//  - 전역변수는 레지스터 변수로 선언할 수 없음
//  - 레지스터 변수의 주소를 구할 수 없음, 메모리에 저장된게 아니기 때문
//  - 레지스터의 사용 여부는 결국 컴파일러가 결정함