#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);     // 공백 포함 입력받기
    
    // 개행 문자 제거
    str[strcspn(str, "\n")] = 0;
    // str[index] 꼴이다! strcspn의 리턴값 == index 이기 때문
    // '\n'이 처음으로 등장하는 배열의 인덱스를 리턴
    // 그 인덱스에, 0 즉 널문자('\0')를 삽입  => '\n'을 '\0'으로 바꾸는 효과

    printf("입력한 문자열은 [ %s ] 입니다. \n", str);

    return 0;
}

// size_t strcspn(const char *s, const char *reject);
//  - 문자열 s 에서 reject 안에 들어있는 문자 중 '가장 먼저 나오는 문자'의 인덱스를 반환!
//  - '거절 집합에 있는 문자 중 처음 등장하는 위치' 를 의미함