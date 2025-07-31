// 1차원 배열을 포인터배열로 연결하면, 2차원 배열처럼 쓸 수 있다!

#include <stdio.h>

int main()
{
    int ary_1[4] = { 1, 2, 3, 4, };
    int ary_2[4] = { 11, 12, 13, 14, };
    int ary_3[4] = { 21, 22, 23, 24, };

    int *pary[3] = { ary_1, ary_2, ary_3 };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", pary[i][j]);  // 2차원 배열처럼 출력!
                                        // pary[0] == ary_1;  pary[0][0] == ary_1[0];
        }
        printf("\n");
    }

    return 0;
}

// 출력:
//    1   2   3   4
//   11  12  13  14
//   21  22  23  24