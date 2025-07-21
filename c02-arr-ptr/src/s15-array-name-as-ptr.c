#include <stdio.h>

int main()
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;           // ary[0] = 10
    *(pa + 1) = 20;     // ary[1] = 20
    pa[2] = pa[0] + pa[1];

    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);   // pa[i] 대신: ary[i], *(ary + i), *(pa + i) 다 가능하다!
    }
    printf("\n");

    return 0;
 }