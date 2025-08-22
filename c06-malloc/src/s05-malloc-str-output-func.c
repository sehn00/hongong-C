#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps);

int main()
{
    char tmp[80];
    char *str[21] = { 0 };
    // 문자열을 가리키는 포인터 21개가 들어있는 배열을 선언하고, 모든 요소를 0(NULL)으로 초기화하기
    int i = 0;

    while (i < 20) {     // 왜 i < 20? >>> 마지막칸(str[20])을 NULL 종료 표시용으로 남겨두기 위함
        printf("문자열을 입력하세요: ");
        fgets(tmp, sizeof(tmp), stdin);
        tmp[strcspn(tmp, "\n")] = '\0';

        if (strcmp(tmp, "end") == 0)    // strcmp -> {0:같음, 양수:tmp가 더큼, 음수:tmp가 더작음}
            break;                      // end가 입력되면 반복 종료

        str[i] = (char *)malloc(strlen(tmp) + 1);   // 문자열 저장공간 할당
        // 좌변 == 포인터배열의 요소, 즉 주소  //  우변 == char*형 포인터, 즉 주소

        strcpy(str[i], tmp);    // str[i]에, 입력받아서 임시로 저장했던 tmp를 복사해서 넣음
        i++;
    }
    print_str(str);     // 함수 호출
    // str == 배열 == 첫번째 '원소'의 주소  -> 이때 '원소'는 '문자열을 가리키는 포인터'이므로 "주소"이다!(char *)
    // 따라서, str == 첫번째 '원소'의 주소 => '''이중포인터(char **ps)'''

    for (i = 0; str[i] != NULL; i++) {
        free(str[i]);   // 메모리 해제
    }
    
    return 0;
}

void print_str(char **ps)   // 이중포인터 선언
{
    while (*ps != NULL) {   // *ps = 현재 가리키는 요소(str[0], str[1],...)의 값 = 문자열 시작 주소
                            // 문자열 시작 주소가 NULL 이면, 문자열이 더 없는거니까, NULL이 아닐때까지만 반복
        printf("%s\n", *ps);    // *ps로 str[0], str[1],...의 문자열 출력
        ps++;   // ps는 char**형 이중포인터  -> 한번 증가하면, 다음 문자열 포인터를 가리킨다!
        // str[0] -> str[1] -> str[2] -> ....
    }
}


// 출력:
// 문자열을 입력하세요: asd sdfs dasdf
// 문자열을 입력하세요: asdfasdfsd sdfsd
// 문자열을 입력하세요: asdf sdf
// 문자열을 입력하세요: end
// asd sdfs dasdf
// asdfasdfsd sdfsd
// asdf sdf