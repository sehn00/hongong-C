#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80], str2[80];
    char *resp;
    
    puts("과일 이름 2개 입력: ");       // 길이가 더 긴 문자열 출력하기
    scanf("%s%s", str1, str2);

    if (strlen(str1) > strlen(str2))
        resp = str1;
    else
        resp = str2;

    printf("이름이 더 긴 과일은 %s 입니다.\n", resp);

    return 0;
}

// strlen() 함수는
// 배열에 저장된 문자열에서 널문자가 나올 때까지 문자 수를 세어 반환한다!
// 배열의 크기와 무관하게, 실제 저장된 문자열 길이 확인 가능