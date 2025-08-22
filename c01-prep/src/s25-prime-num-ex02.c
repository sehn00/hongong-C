#include <stdio.h>

int main()
{
    int num, i, j, isPrime, cnt = 0;
    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        isPrime = 1;    // 처음엔 소수라고 가정

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;    // i가 j로 한번이라도 나눠지면 소수x
                break;          // 검사 종료
            }
        }
    
    if (isPrime == 1) {
        printf("%4d", i);   // 소수면 출력 (%4d로 숫자 폭 맞춰서 출력)
        cnt++;              // cnt++로 5개마다 줄바꿈
        if (cnt % 5 == 0)
            printf("\n");
    }
    }
    
    printf("\n");
    return 0;
}