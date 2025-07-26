#include <stdio.h>

int main()
{
    char grade, name[20];

    printf("학점 입력: ");
    scanf("%c", &grade);
    printf("이름 입력: ");
    scanf("%s", name);      // 배열의 이름 = 배열 첫 원소의 주소! 따라서 & 안쓴다
    printf("%s의 학점은 %c 입니다.\n", name, grade);

    // name에 20byte를 할당했다!
    // 1byte는 \0이 차지, 따라서 19byte가 남음
    // 한글 한 자는 2byte이므로, 한글 9자까지 저장 가능
    // 초과하면? *** stack smashing detected ***: terminated  <<< 스택 버퍼 오버플로우 탐지됨
    
    return 0;
}

// (추가)
// scanf 에서 ctrl+Z 를 입력하면 >> -1 을 반환한다!
// - 표준입력함수(scanf, getchar, fgetc 등)는 더이상 읽을 데이터가 없을때 EOF(End Of File)을 리턴
// - EOF 는 매크로상수 -1 로 정의됨 (#define EOF (-1))
// - ch = scanf("%c", &input);   >> 여기서 ctrl+Z 누르면? ch = -1 이 되고 입력 종료