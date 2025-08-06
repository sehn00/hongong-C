#include <stdio.h>

struct student      // 일반적으로, main() 위에서 구조체 정의! (프로토타입 x)
{
    int num;
    double grade;
};                  // 세미콜론 빼먹지말기!

int main()
{
    struct student s1;
    
    s1.num = 20231234;
    s1.grade = 4.33;
    printf("학번: %d\n", s1.num);
    printf("학점: %.2lf\n", s1.grade);

    return 0;
}

// 출력:
// 학번: 20231234
// 학점: 4.33