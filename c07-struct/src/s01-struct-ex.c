#include <stdio.h>

// 전역에서 쓰려면, main() 위에서 구조체 정의! (프로토타입 x)
struct student {    // student 구조체 선언
    int num;        // 구조체의 첫번째 멤버
    double grade;   // 구조체의 두번째 멤버
};              // 세미콜론 빼먹지말기!

int main()
{
    struct student s1;  // struct student 가 int같은 새로운 자료형이 된다!
    
    s1.num = 20231234;      // s1의 num 멤버에 20231234 저장
    s1.grade = 4.33;        // s1의 grade 멤버에 4.33 저장
    printf("학번: %d\n", s1.num);
    printf("학점: %.2lf\n", s1.grade);

    return 0;
}

// 출력:
// 학번: 20231234
// 학점: 4.33

/* < 다른 방식 >>> 보통 이게 권장된다!
    typedef struct {
        int num;
        double grade;
    } student;
    ...
    student s1;    // 으로 사용
    ...
*/