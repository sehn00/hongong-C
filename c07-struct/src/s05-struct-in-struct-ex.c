#include <stdio.h>

struct profile {
    int age;
    double height;
};

struct student {
    struct profile pf;      // profile 구조체를 멤버로 사용
    int id;
    double grade;    
};

int main()
{
    struct student sehn;    // struct구조체변수 sehn 선언

    sehn.pf.age = 24;
    sehn.pf.height = 178.2;
    sehn.id = 315;
    sehn.grade = 4.33;

    printf("나이: %d\n", sehn.pf.age);
    printf("키: %.1lf\n", sehn.pf.height);
    printf("학번: %d\n", sehn.id);
    printf("학점: %.2lf\n", sehn.grade);

    return 0;
}