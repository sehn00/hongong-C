#include <stdio.h>

int main()
{
    char *pary[5];  // pointer-array 약어, 포인터배열!
    int i;

    pary[0] = "dog";        // 배열 원소 5개가 모두 char*형 포인터이다
    pary[1] = "elephant";   // pray[1]에는 메모리 주소가 담기고, 그 주소에 문자열이 저장됨
    pary[2] = "horse";      // '''포인터배열의 원소 = 문자열 리터럴의 주소'''
    pary[3] = "tiger";
    pary[4] = "lion";

    for (i = 0; i < 5; i++)
    {
        printf("%s\n", pary[i]);
    }

    return 0;
}