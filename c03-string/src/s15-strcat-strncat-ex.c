#include <stdio.h>
#include <string.h>

int main()
{
    char str[80] = "straw";

    strcat(str, "berry");
    // 이 순간 이후로 str == "strawberry"  이다..!
    printf("%s\n", str);
    strncat(str, "piece", 3);   // strawpie 가 아니라, strawberrypie 가 된다!
    printf("%s\n", str); 
}



// strcat == stirng concatenate(잇다, 연결하다)
// strcat(배열명, 붙일 문자열);

// strncat == string concatetnate with n limit
// strncat(배열명, 붙일 문자열, 붙일 최대 문자 개수);

// 얘들은 원본 문자열 배열을 직접 수정한다!

// strcat, strncat은 배열을 초기화한 다음에 사용해야함
// char str[100] = "";          // 빈 문자열로 초기화
// char strcat(str, "Hello.");