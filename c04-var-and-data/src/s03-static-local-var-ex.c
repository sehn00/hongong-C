#include <stdio.h>

void test_static(void);
void test_local(void);

int g = 100;    // 전역변수

int main()
{
    printf("전역변수 g: %d\n", g);  // 출력: 100

    test_static();      // 출력: 1
    test_static();      // 출력: 2

    test_local();       // 출력: 1
    test_local();       // 출력: 1

    return 0;
}

void test_static(void)
{
    static int s = 0;     // static 지역변수
    s++;                                    // static 지역변수 값은 한번만 초기화되고, 계속 유지된다!
    printf("static 지역변수 s: %d\n", s);    // 일반 지역변수는 함수의 호출과 종료와 함께 수명을 다하지만
}                                           // static 지역변수는 한번 초기화된 이후, 프로그램 끝날때까지 유지됨

void test_local(void)
{
    int l = 0;      // 일반 지역변수
    l++;
    printf("일반 지역변수 l: %d\n", l);
}

//                   static지역변수          전역변수
// 선언 위치:            함수 내부            함수 외부
// 생명주기:         둘다 프로그램 시작~종료 (계속 유지됨)
// 접근 범위:   선언된 함수 내부에서만 가능    전체 파일 또는 extern시 다른 파일
// 재호출 시 값 유지여부:          둘다 유지됨