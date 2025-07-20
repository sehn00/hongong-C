#include <stdio.h>

void fruit(int cnt);

int main()
{
    fruit(1);

    return 0;
}

void fruit(int cnt)
{
    printf("apple\n");
    if (cnt == 3)       // 세번 호출되는 재귀호출 함수
        return;
    fruit(cnt + 1);     // cnt++ 은 안된다! 실행된 후 마지막에 ++되니까..
}