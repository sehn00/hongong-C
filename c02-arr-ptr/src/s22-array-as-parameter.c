#include <stdio.h>

int main()
{
    int ary[5] = { 1, 2, 3, 4, 5 };
    print_ary(ary);

    return 0;
}

void print_ary(int *pa)     // 여기 매개변수에 int *pa 대신,
{                           // int pa[5] 를 써도 된다! main()의 ary배열과 같은 배열 선언
    int i;                          // 매개변수 자리에 선언된 배열은 자동으로 포인터로 변환됨
    for (i = 0; i < 5; i++) {       // int pa[5] = int pa[] => int *pa 가 된다!! (원소 개수도 날아감)
        printf("%d ", pa[i]);
    }
}