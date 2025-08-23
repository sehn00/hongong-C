#include <stdio.h>

struct student
{
    int id;
    char name[20];
    double grade;
};

int main()
{
    struct student s1 = { 315, "홍길동", 2.4, },
        s2 = { 316, "길동홍", 3.7, },
        s3 = { 317, "동길홍", 4.4, };   // 구조체변수 한번에 여러개 선언하기
        
    struct student max;
    
    max = s1;
    if (s2.grade > max.grade)
        max = s2;
    if (s3.grade > max.grade)
        max = s3;
    
    printf("학번: %d\n", max.id);
    printf("이름: %s\n", max.name);
    printf("성적: %.1lf\n", max.grade);

    return 0;
}

/* 구조체변수 이렇게 선언하는것도 가능!

struct student
{
    int id;
    char name[20];
    double grade;
} s1 = { 315, "홍길동", 2.4, };

 */