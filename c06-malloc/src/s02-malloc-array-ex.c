#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;
    int i, sum = 0;

    pi = (int *)malloc(5 * sizeof(int));    // pi = int ary[5] 와 역할은 같다!
    // 차이: int ary[5] 는 스택에 저장되지만, pi 는 힙에 저장된다

    if (pi == NULL)     // 메모리가 부족할 경우, 예외처리
    {
        printf("메모리가 부족합니다!\n");
        exit(1);
    }

    printf("다섯 명의 나이를 입력하세요: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);    // 왜 pi[i]가 아니라 &pi[i]이지?  -> pi[i]는 주소가 아니라 값!
        sum += pi[i];           // pi == 동적할당 시작하는 주소, 즉 동적배열 첫 원소의 주소!
    }

    printf("다섯 명의 평균 나이: %.1lf\n", (sum / 5.0));

    free(pi);       // 반드시 메모리 해제하기

    return 0;
}