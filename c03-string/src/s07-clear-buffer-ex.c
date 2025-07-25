#include <stdio.h>

int main()
{
    int num, grade;

    printf("학번 입력: ");
    scanf("%d", &num);  // 숫자 입력 후 엔터('\n')
    // 버퍼: '1', '2', '3', '4', '\n'
    // num 에는, '\n'을 제외한 1234 가 int로 들어간다!
    // %d 는 공백을 숫자 입력의 끝으로 간주하기 때문...

    getchar();      // 버퍼에 남아있는 '\n'문자 제거! (필수)
    
    printf("학점 입력(A, B, C, D, F): ");
    grade = getchar();

    printf("학번: %d, 학점: %c\n", num, grade);

    return 0;
}

// 그럼 언제 getchar(); 로 입력버퍼를 비워줘야하냐?
//   : 입력을 받을때
//     (1) 숫자(scanf()) -> 문자
//     (2) 숫자(scanf()) -> 문자열
//     의 흐름인 경우!