#include <stdio.h>

int main()
{
    int rank = 2, m = 0;

    switch (rank) {
        case 1:         // rank가 1 일때
            m = 300;
            break;
        case 2:         
            m = 200;    // rank가 2 일때
            break;
        case 3:         // rank가 3 일때
            m = 300;
            break;
        default:        // rank와 일치하는 case가 없을때
            m = 10;
            break;
    }
    printf("m: %d\n", m);

    return 0;
} 