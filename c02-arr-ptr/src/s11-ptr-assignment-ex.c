#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;     // int*형 포인터변수를, double*형 포인터변수에 대입함... 타입 불일치, ERROR 발생!
    printf("%p\n", pd);
    printf("%lf\n", *pd);

    return 0;
}