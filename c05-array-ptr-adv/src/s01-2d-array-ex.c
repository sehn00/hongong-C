#include <stdio.h>

int main()
{
    int score[3][4];    // 2차원 배열 선언: 3명의 네 과목 점수를 저장
    int total, i, j;
    double avg;

    for (i = 0; i < 3; i++)         // 학생 수(3명)만큼 반복
    {
        printf("4과목 점수 입력: ");
        for (j = 0; j < 4; j++)     // 과목 수(4과목)만큼 반복
        {
            scanf("%d", &score[i][j]);  // 점수 입력
        }
    }

    for (i = 0; i < 3; i++)
    {
        total = 0;                  // 학생이 바뀔 때마다 총점=0 으로 초기화
        for (j = 0; j < 4; j++)
        {
            total += score[i][j];   // 학생별로 총점 누적
        }
        avg = total / 4.0;      // 평균 계산
        printf("총점: %d, 평균: %.2lf\n", total, avg);
    }

    return 0;
}

// "2차원 배열 == 행렬" 이다!
// int score[3][4];    // 3x4 행렬
// (주의) 행과 열을 사용할때는, index로 접근한다! (0~2행; 0~3열)
//  -> 총 12개의 int형 변수가, '연속된 메모리 공간'에 저장됨