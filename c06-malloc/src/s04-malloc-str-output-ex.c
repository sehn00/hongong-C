#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tmp[80];   // 임시 char배열 선언
    char *str[3];   // 문자열을 가리키는 포인터 3개가 들어있는 배열! (문자열 3개 들어감)

    for (int i = 0; i < 3; i++)     // (번외) 이때 i 는 for문 안에서만 존재하는 지역변수이다
    {
        printf("문자열을 입력하세요: ");
        fgets(tmp, sizeof(tmp), stdin);     // 입력받은 문자열을 tmp에 임시저장
        tmp[strcspn(tmp, "\n")] = '\0';     // 입력 중 개행 제거 (c03-s18 참고)

        str[i] = (char *)malloc(strlen(tmp) + 1);   // 문자열 저장공간 할당
        // '''임시저장된 문자열 길이 + 1(널문자 공간)''' 만큼 동적할당한다!!
        strcpy(str[i], tmp);    // str[i]에 tmp문자열 복사하기
    }
    // str[0], str[1], str[2] 가 힙에 할당되고, 여기에 입력받은 문자열이 각각 들어감

    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 문자열: %s\n", i + 1, str[i]);
    }
    // str[0], str[1], str[2] 에 저장된 문자열이 출력됨

    for (int i = 0; i < 3; i++)
    {
        free(str[i]);   // 동적할당 메모리 해제
    }
    // str[0], str[1], str[2] 가 할당된 힙 메모리 공간이 해제됨

    return 0;
}

// 출력:
// 문자열을 입력하세요: asdf sdfsdfasd
// 문자열을 입력하세요: sdf dsfs
// 문자열을 입력하세요: sdfafdf fd
// 1번째 문자열: asdf sdfsdfasd
// 2번째 문자열: sdf dsfs
// 3번째 문자열: sdfafdf fd