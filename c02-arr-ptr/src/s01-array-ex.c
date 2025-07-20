#include <stdio.h>

int main()
{
    int ary[5];     // 요소자료형 배열명[요소개수] <<< 로 선언!
    
    ary[0] = 10;
    ary[1] = 20;
    ary[2] = ary[0] + ary[1];
    printf("배열의 네번째 요소 입력: ");
    scanf("%d", &ary[3]);
    
    printf("%d\n", ary[2]);     // 배열의 세번째 요소 출력
    printf("%d\n", ary[3]);
    printf("%d\n", ary[4]);     // 쓰레기값 출력

    return 0;
}