#include <stdio.h>

typedef struct {
    int num;
    double grade;
} Student;  // 새로운 자료형 Student 생성됨

/***************** 아래와 같은 역할 *********************
struct student {
    int num;
    double grade;
};
typedef struct student Student;    
// 'struct student'라는 구조체 이름을, 'Student'로 재정의
******************************************************/

void print_data(Student *ps);   // Student *ps == Student구조체를 가리키는 포인터 (구조체포인터)
// 인수가 헷갈린다고?  void print_data(int *pi) 랑 다를게 없다!

int main()
{
    Student s1 = { 315, 4.2, };
    print_data(&s1);

    return 0;
}

void print_data(Student *ps)
{
    printf("학번: %d\n", ps->num);  // (*ps).num 과 완전히 동일! but -> 를 더 많이쓴다
    printf("학점: %.1lf\n", ps->grade);
}