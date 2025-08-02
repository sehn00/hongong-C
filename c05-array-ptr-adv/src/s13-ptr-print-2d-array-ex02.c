#include <stdio.h>

void print_ary(int (*pa)[4]);

int main()
{
    int ary[3][4] = {
        { 1, 2, 3, 4, },
        { 5, 6, 7, 8, },
        { 9, 10, 11, 12, }
    };

    print_ary(ary);     // 함수 호출

    return 0;
}

void print_ary(int (*pa)[4])    // 매개변수에 뭐가 들어가야할까??
// -> ary는 int[3][4] 타입 이므로, "int 4개짜리 배열을 가리키는 포인터"를 넣자!  => int (*pa)[4]
// "열 수"를 맞춰야함! 행 수 아니다
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%4d", pa[i][j]);
        }
        printf("\n");
    }
}