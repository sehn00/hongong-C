#include <stdio.h>

int main()
{
    char str[80];

    printf("공백이 포함된 문자열 입력: \n");
    fgets(str, sizeof(str), stdin);
    printf("입력한 문자열은 %s 입니다.\n", str);

    return 0;
}


// fgets() 함수 원형:
//   char *fgets(char *str, int n, FILE *stream)
// str: 입력을 저장할 버퍼 / n: 최대 입력 길이 (n-1개 문자 + \0) / stream: 입력스트림


// fgets() 에서는
// 입력을 엔터로 마무리하면, str 배열 안에 '\n'이 그대로 들어가고, 끝에 '\0'이 붙음
// 'abc def 엔터'를 입력하면, str 배열에는 ['a','b','c',' ','d','e','f','\n','\0'] 가 들어감
// 보통 마지막의 '\n'을 지워줘야한다!
//  => str[strcspn(str, "\n")] = '\0';      ...s00 에서 다룸!
//     (제일 앞 str = 배열 이름; stdcspn = string complement span; #include <string.h> 필요)

// scanf("%s") 에서는, '\n'이 str 배열에 안들어가고 버퍼에 남아있는다!
// (대신 여기선 getchar()로 입력버퍼를 비워줘야했다 - s07 참고)