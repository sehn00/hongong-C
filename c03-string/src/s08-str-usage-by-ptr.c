#include <stdio.h>

int main()
{
    char *dessert = "apple";     // 포인터에 문자열 초기화 ...읽기 전용 선언!

    printf("오늘 디저트는 %s 입니다.\n", dessert);
    dessert = "banana";
    printf("내일 디저트는 %s 입니다.\n", dessert);

    return 0;
}

// char *dessert = "apple";  이건...
//  - "apple"은 "문자열 리터럴 상수"
//  - char *dessert == 그 문자열의 첫 글자 주소를 나타내는 포인터 변수
//  - dessert[0] = 'A';    // 오류 발생! (읽기 전용이라 수정 불가)
// 따라서,
// 수정까지 하려면, char dessert[] = "apple"; 처럼 해야한다