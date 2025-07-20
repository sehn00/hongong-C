#include <stdio.h>

int main()
{
    char str[80] = "applejam";  // 문자열 초기화
    // 전체 80칸 중 차지하는 8칸 뺀 나머지 73칸은 널 문자(\0) 으로 채워짐

    printf("%s\n", str);        // 당연하게도 배열명 str은, 첫 요소의 주소를 의미하므로 & 안씀!
    printf("새 문자열 입력: ");
    scanf("%s", str);
    printf("입력 후 문자열: %s\n", str);

    return 0;
}

// 배열 요소의 개수는 최소한 '문자열 길이 + 1' 이어야 한다!.. \0 자리 필요하기 때문