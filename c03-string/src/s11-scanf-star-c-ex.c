#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char name[50];

    printf("나이를 입력하세요: ");
    scanf("%d", &age);   // 숫자 입력 후 엔터 -> '\n'이 버퍼에 남음

    scanf("%*c");       // scanf("%*c"); == 버퍼에 남은 '\n' 제거
    // 사실 그냥 getchar(); 를 더 많이씀 ...알고는 있자!

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);

    // 개행 문자 제거
    name[strcspn(name, "\n")] = '\0';       // <string.h> 추가 필요

    printf("나이: %d, 이름: %s\n", age, name);

    return 0;
}