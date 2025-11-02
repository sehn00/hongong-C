#include <stdio.h>
#include <stdlib.h>     // malloc, free 함수 사용을 위한 헤더파일

int main()
{
    // 동적할당 영역을 연결할 int*형, double*형 포인터 선언
    int *pi;    
    double *pd;

    pi = (int *)malloc(sizeof(int));    // 메모리 동적할당(4byte) 후 int*형 포인터 연결

    if (pi == NULL) {       // 동적할당 실패하면 NULL ptr 반환
        printf("# 메모리가 부족합니다.\n");     // 예외상황 메시지 출력
        exit(1);    // 프로그램 즉시 종료, 상태코드 1(비정상종료) 반환
    }
    
    pd = (double *)malloc(sizeof(double));  // 메모리 동적할당(8byte) 후 double*형 포인터 연결
    
    *pi = 10;
    *pd = 3.14;

    printf("정수형으로 사용: %d\n", *pi);
    printf("실수형으로 사용: %lf\n", *pd);

    free(pi);   // 사용이 끝난 동적할당 공간(힙)은 반드시 free()로 반환해야한다!!
    free(pd);   // free() 안해도 동작은 하지만, 나중에 메모리 누수(memory leak)가 발생할 수 있음

    return 0;
}


// malloc() 과 free() 는 어떻게 굴러가는가....

// 함수 원형:
//  - void *malloc(size_t size);
//  - void free(void *p);

// malloc이 반환하는 (void *)형포인터를
// (int *), (double *) 등으로 타입캐스팅 후 사용한다!

// malloc으로 할당된 동적할당 메모리 공간은, 항상 힙(heap) 영역에 생성된다!
// 따라서, 함수가 끝나도 남아있다!  -> free로 해제해줘야함
