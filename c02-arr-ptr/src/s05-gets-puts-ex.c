#include <stdio.h>

int main()
{
    char str[80];
    printf("문자열 입력: ");
    fgets(str, sizeof(str), stdin);  // gets -> fgets로 변경

    puts("입력된 문자열: ");    // puts는 문자열 출력 후 자동 개행
    // printf("입력된 문자열: \n") 과 동일
    // 포맷이 필요없는 고정 문구는 puts 써도 된다!
    puts(str);      // puts -> char배열 출력에 사용

    return 0;
}


// char *fgets(char *str, int n, FILE *stream);
// - str: 입력받을 문자열 주소
// - n: 최대 읽을 문자 수 (최대 n-1개 + \0)
// - stream: 입력 스트림 (stdin 이면 표준 입력, 즉 키보드 입력)

//             scanf        vs         fgets
// 공백 처리:  공백 전까지 읽음 / 공백 포함 줄 끝까지 읽음
// 사용 목적:  단어 입력에 적합 / 한 줄 전체 입력에 적합

// '줄 끝'은 널문자(\0)으로 파악한다!