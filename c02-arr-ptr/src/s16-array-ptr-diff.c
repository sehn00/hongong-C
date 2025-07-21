#include <stdio.h>

int main(void)
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    printf("배열의 값: ");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", *pa);
        pa++;               // ary++ 은 안된다! 배열명은 상수이기 때문에 값을 바꿀 수 없기 때문...
    }                       // ( ary++ <=> ary = ary + 1 )
    printf("\n");           // 포인터는 가능! pa++ 으로 배열 원소 인덱스 increment 가능하다

    return 0;
}