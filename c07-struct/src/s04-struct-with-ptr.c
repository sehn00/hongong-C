#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char name[20];      // 1 byte * 20개
    int age;            // 4 byte  (여기까지 24 byte, 기준 8 byte의 정수배이므로 패딩 x)
    double height;      // 8 byte
    char *intro;        // 8 byte (64bit 환경에서 포인터는 8 byte)
};  // char name[20]의 20 byte가 패딩의 기준이 되는게 아니다! 배열요소 타입(char)의 1 byte만 요구
// 따라서 기준이 되는것은 double height의 8 byte!

int main()
{
    struct profile sehn;    // 구조체변수 sehn 선언
    
    strcpy(sehn.name, "최세현");
    sehn.age = 24;
    sehn.height = 178.2;

    sehn.intro = (char *)malloc(80);
    printf("자기소개: ");
    fgets(sehn.intro, 80, stdin);
    sehn.intro[strcspn(sehn.intro, "\n")] = 0;    // fgets의 '\n' 제거

    printf("이름: %s\n", sehn.name);
    printf("나이: %d\n", sehn.age);
    printf("키: %.1lf\n", sehn.height);
    printf("자기소개: %s\n", sehn.intro);

    return 0;
}

// < strcspn 복습 >
// 기본형: size_t strcspn(const char *s, const char *reject);
// 역할: s 문자열에서, reject 문자열에 포함된 어떤 문자든 처음 나타나는 위치(인덱스)를 반환