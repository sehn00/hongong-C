#include <stdio.h>

int main()
{
    printf("%d\n", 10);
    printf("%lf\n", 3.1415);        // double은 lf
    printf("%.1lf\n", 3.1415);      // 소수점 첫째자리까지
    printf("%.10lf\n", 3.1415);     // 소수점 열째자리까지

    printf("%d와 %d의 합은 %d입니다\n", 10, 20, 10 + 20);
    printf("%.1lf - %.1lf = %.1lf\n", 3.14, 1.2, 3.14 - 1.2);
    
    return 0;
}