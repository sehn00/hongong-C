#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;
    int num, size = 5, cnt = 0;

    pi = (int *)calloc(size, sizeof(int));      // calloc(): 할당한 공간을 0 으로 초기화
    while (1) {
        printf("양수만 입력하세요: ");
        scanf("%d", &num);
        
        if (num <= 0)
            break;
        if (cnt == size) {
            size += 5;
            pi = (int *)realloc(pi, size * sizeof(int));    // realloc(): 저장공간 크기 조정
        }
        pi[cnt++] = num;
    }

    for (int i = 0; i < cnt; i++) {
        printf("%4d", pi[i]);
    }
    printf("\n");
    free(pi);

    return 0;
}

// 함수 원형:
//  - void *calloc(usinged int, unsigned int);
//  - void *realloc(void *, unsigned int);

// calloc()
//  - 배열요소 개수와, 요소 하나의 byte크기를 받아서, void*형 포인터 반환!
//  - pi = (int *)calloc(5, sizeof(int));  -> { 0, 0, 0, 0, 0, } 이 힙에 할당됨
//  - calloc == contiguous allocation, 연속된 할당 (연속된 메모리 블록을 할당하고 0 으로 초기화한다)
//  - 0 으로 초기화하므로 malloc보다 안정성 높음, 성능 최적화면에서는 살짝 불리

// realloc()
//  - 이미 할당한 저장공간의 포인터와, 재할당 후 전체 저장공간의 크기를 받아서, 아까의 포인터를 반환
//  - pi = (int *)realloc(pi, 10 * sizeof(int));  -> 기존의 pi에 배열요소 10개의 공간이 재할당됨
//  - 저장공간 늘리는 경우: 이미 입력한 값은 유지 & 추가된 공간에는 쓰레기값
//  - 저장공간 줄이는 경우: 초과된 데이터는 잘려나감


// 출력:
// 양수만 입력하세요: 1
// 양수만 입력하세요: 2
// 양수만 입력하세요: 3
// 양수만 입력하세요: 4
// 양수만 입력하세요: -5
//    1   2   3   4