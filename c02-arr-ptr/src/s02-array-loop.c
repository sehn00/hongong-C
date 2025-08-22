#include <stdio.h>

int main()
{
    int i, total = 0;
    double avg;
    int score[5];

    int cnt = sizeof(score) / sizeof(score[0]);     // sizeof 연산자로 요소 개수 파악

    printf("성적 %d개 입력: ", cnt);
    for (i = 0; i < cnt; i++) {
        scanf("%d", &score[i]);     // 각 배열 요소에 성적 입력
    }
    
    for (i = 0; i < cnt; i++) {
        total += score[i];
    }
    avg = total / (double)cnt;      // cnt의 타입캐스팅

    for (i = 0; i < cnt; i++)  {
        printf("%4d", score[i]);
    }

    printf("\n평균: %.1lf\n", avg);

    return 0;
}