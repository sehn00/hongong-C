// 입력한 단어 길이가 5자를 넘는 경우, 6자부터 별(*)을 출력하는 프로그램
// 단어 최대 길이는 15자로 제한

#include <stdio.h>
#include <string.h>

int main()
{
    char input[80], masked[80];
    printf("단어 입력: ");
    fgets(input, sizeof(input), stdin);     // 공백까지 입력받을수 있게 fgets로!
    input[strcspn(input, "\n")] = '\0';     // 개행 문자 제거

    int len = strlen(input);    // len 대신 sizeof 는 쓰면 안된다! sizeof 는 배열 전체 크기..

    if (len > 15) {
        printf("단어의 최대 길이는 15자입니다.\n");
        return 1;       // 종료 상태 코드(exit code)를 OS 에 전달! 비정상 종료를 알림
        // Error 메시지 보기싫으면 그냥 return 0 해도돼...
    }

    for (int i = 0; i < len; i++) {
        if (i < 5)
            masked[i] = input[i];
        else
            masked[i] = '*';    // 6번째 글자부터는 '*'
    }
    masked[len] = '\0';         // 필수! 빼먹으면 안된다....
    
    printf("입력한 단어: %s, 생략한 단어: %s\n", input, masked);

    return 0;
}