#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main()
{
    char *pa = "success";
    char *pb = "failure";

    printf("pa -> %s,  pb -> %s\n", pa, pb);    // swap 전 문자열 출력
    swap_ptr(&pa, &pb);     // pa는 포인터변수, 따라서 &pa == 이중포인터
    printf("pa -> %s,  pb -> %s\n", pa, pb);    // swap 후 문자열 출력

    return 0;
}

void swap_ptr(char **ppa, char **ppb)
{
    char *tmpp;   // 임시저장용 포인터변수
    tmpp = *ppa;
    *ppa = *ppb;
    *ppb = tmpp;
}