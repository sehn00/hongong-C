#include <stdio.h>

int main()
{
    char animal[4][20];     // 5x20 char형 2차원 배열 선언
    int i, rows;

    rows = sizeof(animal) / sizeof(animal[0]);
    // 행의 수 == (배열 전체 크기)/(부분배열 하나의 크기)

    for (i = 0; i < rows; i++)      // 행의 수 만큼 반복
    {
        scanf("%s", animal[i]);     // 문자열 입력받아서, 각 행에 저장
    }

    for (i = 0; i < rows; i++)      // 행의 수 만큼 반복
    {
        printf("%s ", animal[i]);   // 문자열 출력
    }              // animal[i] == char배열의 i행 부분배열의 '배열명' == "주소"
    printf("\n");

    return 0;
}