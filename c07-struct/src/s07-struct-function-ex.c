#include <stdio.h>

struct vision {      // 시력을 저장할 구조체 선언
    double left;    // 왼쪽눈 시력
    double right;   // 오른쪽눈 시력
};

struct vision exchange(struct vision robot);    // 좌우 시력을 바꾸는 함수 (프로토타입)
// 리턴값 = struct vision   // 매개변수 = struct vision

int main()
{
    struct vision robot;    // 구조체변수 robot 선언

    printf("시력 입력(좌/우): ");
    scanf("%lf%lf", &robot.left, &robot.right);
    robot = exchange(robot);    // exchange 함수 호출
    
    printf("바뀐 시력(좌/우): %.1lf, %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot) {
    double tmp;

    tmp = robot.left;
    robot.left = robot.right;
    robot.right = tmp;

    return robot;
}