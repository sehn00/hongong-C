#include <stdio.h>

// int main()
// {
//     int a; double b; char c;

//     printf("int형 변수의 주소: %u\n", &a);
//     printf("double형 변수의 주소: %u\n", &b);
//     printf("char형 변수의 주소: %u\n", &c);

//     return 0;
// }

// 실행하면 경고가 나오긴 한다...!
//   1. %u 는 unsigned int 를 의미.. 주소 출력할때는 %p 를 써야한다!
//   2. %p 에는 (void *)로 타입캐스팅 된 주소가 들어가야한다! >>> ex. (void *)&a
// 아래 방법이 정석!

int main()
{
    int a; double b; char c;

    printf("int형 변수의 주소: %p\n", (void *)&a);
    printf("double형 변수의 주소: %p\n", (void *)&b);
    printf("char형 변수의 주소: %p\n", (void *)&c);

    return 0;
}