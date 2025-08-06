#include <stdio.h>

int main(int argc, char **argv)     // "명령행 인수"를 받을 매개변수
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}


// 명령행 인수 (Command Line Arguent)
//   : CLI에서 프로그램을 실행 시, 실행 파일명 뒤에 전달하는 추가 데이터

// (ex) ./prog src.txt dest.txt
//     argv[0] = "./prog"   (실행 파일명)
//     argv[1] = "src.txt"  (첫 번째 인수)
//     argv[2] = "dest.txt" (두 번째 인수)
//     argc = 3  (인수 개수, 실행 파일명 포함)
// - argv[argc]는 항상 NULL (마지막은 항상 NULL 포인터)  -> C 표준(ISO C)에 의거한 규칙
// - char **argv 는 char *argv[] 와 동일: 문자열 포인터 배열의 시작 주소
// - 인수는 모두 문자열로 전달되므로, 숫자는 atoi/strtol 등으로 변환 필요

/* 
// 메모리 구조 예시
// -------------------------------------
// argc = 3, 실행: ./prog hello world

// argv ──┬─────────────┐
//        │             │
//        ▼             ▼
//    argv[0] ──▶ "./prog\0"
//    argv[1] ──▶ "hello\0"
//    argv[2] ──▶ "world\0"
//    argv[3] = NULL
*/