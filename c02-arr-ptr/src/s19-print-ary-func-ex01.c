#include <stdio.h>

void print_ary(int *pa);

int main()
{
    int ary[5] = { 10, 20, 30, 40, 50 };
    print_ary(ary);
    printf("\n");

    return 0;
}

void print_ary(int *pa)     // 매개변수에 배열명이 들어가야하는거 아니야..?
{                           // 배열명 = 첫 원소의 주소 => int형 포인터변수로 넣으면 된다!
    int i;                  // 사실상 '''ary == pa''', '''ary[i] == pa[i]'''
                                                // 차이점: 배열명은 상수, 포인터는 변수
    for (i = 0; i < 5; i++) {
        printf("%d ", pa[i]);    // *(pa + i) 와 당연히 같다
    }
}