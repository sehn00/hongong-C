#include <stdio.h>

int main()
{
    int ary[3][4] = {
        { 1, 2, 3, 4, },
        { 5, 6, 7, 8, },
        { 9, 10, 11, 12, }
    };

    int (*pa)[4];
    // pa는, 'int[4]형 배열'을 가리키는 포인터
    // 1행 4열짜리 int배열을 가리킨다!

    pa = ary;   // pa에 ary의 시작주소 저장

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", pa[i][j]);
            // i=0 일때, j++ 되면서 ary[0] = { 1, 2, 3, 4, } 의 원소가 출력된다!
        }
        printf("\n");   // i 하나당 개행 한번
    }

    return 0;
}

// 출력:
//    1   2   3   4
//    5   6   7   8
//    9  10  11  12