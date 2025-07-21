#include <stdio.h>

int main()
{
    int ary[5] = {10, 20, 30, 40, 50};
    int *pa = ary;      // pa = &ary[0]
    int *pb = pa + 3;   // pb = &ary[3]

    printf("pa: %p\n", pa);
    printf("pb: %p\n", pb);

    pa++;               // pa = &ary[1]
    printf("pb - pa: %ld\n", pb - pa);      // 2 가 출력됨 (= 주소값 차/sizeof(int) = 8/4 = 2)
    // ptrdiff 는 long-int 로 정의된대, %ld

    printf("앞에 있는 배열 요소의 값 출력: ");
    if (pa < pb)
        printf("%d\n", *pa);
    else
        printf("%d\n", *pb);

    return 0;
}