#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열 원소의 최댓값: %.1lf\n", max);

    return 0;
}

void input_ary(double *pa, int size)
{
    int i;

    printf("%d개의 실수값 입력: ", size);     // '''1.0 2.0 3.0 4.0 5.0''' 으로 입력해도
    for (i = 0; i < size; i++)              // pa[0]=1.0, pa[1]=2.0 ... 으로 처리된다!
    {
        scanf("%lf", &pa[i]);   // &pa[i] = pa + i 와 동일
    }
}

double find_max(double *pa, int size)
{
    double max;
    int i;

    max = pa[0];    // max를 pa[0] 으로 일단 설정하고, 다음 배열 요소와 비교해서 max 찾는다!
    for (i = 0; i < size; i++)
    {
        if (max < pa[i])
            max = pa[i];
    }
    
    return max;     // max 를 리턴하기
}


// (번외)
// 26번 째 줄에서 scanf 처리되는 방식...?
// =>
// scanf 는 매 실행마다 입력을 받는게 아니라,
// '''입력 버퍼에 남아 있는 값을 소모하는 함수이다!'''
//
// 첫 번째 루프에서 입력버퍼에 1.0 2.0 3.0 4.0 5.0 을 남기면
// 입력 구분자(공백, 탭, 엔터)를 기준으로 잘라서 순서대로 가져간다!
// 
// 단, %d, %lf, %s: 문자열, 숫자 입력에서만!
// %c 의 문자 입력에서는 공백도 %c 로 할당되어버린다