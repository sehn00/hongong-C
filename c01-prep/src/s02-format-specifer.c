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

/*
| 서식 지정자 | 대응 자료형           | 크기 (바이트) | 의미                 | 예시                                                    |
| --------- | -------------------- | ----------- | -------------------- | ------------------------------------------------------ |
| `%d`      | `int`                | 4           | 부호 있는 10진수       | `int a = -10; printf("%d", a);`                        |
| `%u`      | `unsigned int`       | 4           | 부호 없는 10진수       | `unsigned int b = 10; printf("%u", b);`                |
| `%ld`     | `long`               | 8           | 부호 있는 10진수       | `long c = -1000; printf("%ld", c);`                    |
| `%lu`     | `unsigned long`      | 8           | 부호 없는 10진수       | `unsigned long d = 1000; printf("%lu", d);`            |
| `%lld`    | `long long`          | 8           | 64비트 정수 (부호 있음) | `long long e = 123456789; printf("%lld", e);`          |
| `%llu`    | `unsigned long long` | 8           | 64비트 정수 (부호 없음) | `unsigned long long f = 123456789; printf("%llu", f);` |

| 서식 지정자 | 대응 자료형              | 크기 (byte, LP64) | 의미 / 용도                         |
| --------  | ----------------------- | --------------   | ---------------------------        |
| `%zu`     | `size_t`                | 8                | `sizeof` 결과, 메모리 크기 (부호 없음) |
| `%zd`     | `ssize_t` / `ptrdiff_t` | 8                | 메모리 크기 (부호 있음), 포인터 차이    |
| `%zx`     | `size_t`                | 8                | 메모리 크기를 16진수로 출력            |

*/