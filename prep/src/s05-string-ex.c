#include <stdio.h>
#include <string.h>      // 문자열 다루는 헤더파일 포함

int main()
{
    char fruit[20] = "strawberry";
    // char 배열 = 문자열을 저장하는 변수의 역할! (%s 형식지정자 사용)

    printf("딸기: %s\n", fruit);
    printf("딸기잼: %s %s\n", fruit, "jam");

    // (번외) 배열은 선언된 이후에 대입 연산자로 입력 불가!
    // fruit = "banana" <<< ERROR
    // error C2106: '=' 왼쪽 피연산자는 l-value이어야 합니다.
    // l-value = 메모리의 주소를 가지는 값 (대입의 왼쪽에 올 수 있는)

    strcpy(fruit, "banana");
    printf("%s\n", fruit);      // 출력: banana

    return 0;
}