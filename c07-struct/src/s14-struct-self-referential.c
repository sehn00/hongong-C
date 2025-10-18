#include <stdio.h>
#include <stdlib.h>

typedef struct __Node_t {       // 구조체 자기참조(self-referential)
    int value;
    struct __Node_t *next;
} Node_t;
// 구조체 멤버에 자기 자신을 가리키는 포인터가 들어가므로,
//  (1) struct __Node_t 라는 이름을 먼저 정의하고
//  (2) struct __Node_t *next 로 자기 자신을 참조할 수 있게 한 후
//  (3) typedef 로 별칭(alias) Node_t 를 지정했다

Node_t *head = NULL;

// 리스트의 pop() - 간단 ver.
int List_Pop() {
    Node_t *tmp = head;        // 이전 head를 기억
    int value = head->value;   // 이전 값도 기억
    head = head->next;         // head를 다음 포인터로 이동
    free(tmp);                 // 이전 head 해제
    return value;              // head의 값 리턴
}
