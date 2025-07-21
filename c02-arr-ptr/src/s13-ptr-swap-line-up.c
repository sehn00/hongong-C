// 키보드로 실수 3개를 입력받아, 큰 숫자부터 작은 숫자로 정렬한 뒤 출력하는 프로그램
// main(), swap() 은 유지, line_up() 함수 구현 예제

#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *pa, double *pb, double *pc);

int main()
{
    double max, mid, min;

    printf("실수 세 개 입력: ");
    scanf("%lf%lf%lf", &max, &mid, &min);
    line_up(&max, &mid, &min);      // line_up() 호출
    printf("정렬된 값 출력: %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double tmp;

    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void line_up(double *pa, double *pb, double *pc)
{
    if (*pa < *pb)
        swap(pa, pb);       // (주의) swap(*pa, *pb)가 아니다!
    if (*pa < *pc)          // '''double *pa''' 라고 했으면,
        swap(pa, pc);       //  -> 포인터변수 = pa
    if (*pb < *pc)          //  -> *pa = 그 주소에 저장된 값을 사용하는 역참조 이다!
        swap(pb, pc);
}