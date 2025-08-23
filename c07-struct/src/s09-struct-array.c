#include <stdio.h>

struct address {
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main()
{
    struct address list[3] = {      // 구조체 배열 초기화
        { "홍길동", 23, "111-1111", "동작구", },
        { "길홍동", 32, "222-2222", "광진구", },
        { "동홍길", 42, "333-3333", "관악구", }
    };

    for (int i = 0; i < 3; i++) {
        printf("%10s %5d %15s %15s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
    }

    return 0;
}

// 출력:
//  홍길동    23        111-1111       동작구
//  길홍동    32        222-2222       광진구
//  동홍길    42        333-3333       관악구