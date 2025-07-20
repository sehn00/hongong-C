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
    if (cnt == 3)
        return;
    fruit(cnt + 1);
}