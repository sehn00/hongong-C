#include <stdio.h>

int main(void)
{
    int ary[3];
    int i;

    *(ary + 0) = 10;                // ary[0] = 10 과 동일!
    *(ary + 1) = *(ary + 0) + 10;   // ary[1] = ary[0] + 10

    printf("세 번째 배열 요소 입력: ");
    scanf("%d", ary + 2);           // scanf("%d", ary[2]);

    for (i = 0; i < 3; i++)
    {
        printf("%5d", *(ary + i));  // printf("%5d", ary[i]);
    }
    printf("\n");
}