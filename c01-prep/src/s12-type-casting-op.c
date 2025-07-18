#include <stdio.h>

int main()
{
    int a = 20, b =3;
    double res;

    res = ((double)a / (double)b);      // 타입 캐스팅: (double)a 로 int형인 a를 double로 쓰기
    printf("a/b = %.1lf\n", res);
    
    int res_i = (int)res;               // 타입 캐스팅
    printf("(int)%.1lf의 결과: %d\n", res, res_i);

    // (추가) 암시적 형변환
    int x = 5;  double y = 3.14;
    printf("sizeof(x + y) = %ld byte\n", sizeof(x + y));     // 출력: 8 byte
    // x + y 가 8byte이다? int가 아니라 double이다!

    return 0;
}