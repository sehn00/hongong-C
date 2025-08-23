// 자료구조 중 '''Linked List'''

#include <stdio.h>

struct node     // 자기 참조 구조체 (Linked List에서의 Node)
{
    int num;            // int형 데이터를 저장하는 멤버 num
    struct node *next;  // 다음 노드(구조체, 즉 자기자신 타입)을 가리키는 포인터 멤버 next
};

int main()
{
    struct node a = { 10, 0 },  // 노드 a  -> num=10, next=NULL
        b = { 20, 0 },          // 노드 b  -> num=20, next=NULL
        c = { 30, 0 };          // 노드 c  -> num=30, next=NULL
        // 아직은 서로 연결되지 않은 세개의 독립적인 노드
        
    struct node *head = &a,     // 헤드노드 = &a  (a가 linked list의 시작 지점이 된다)
        *current;               // 선언만 하고 초기화되지 않은 노드 current
        
    a.next = &b;    // a의 next = b
    b.next = &c;    // b의 next = c

    printf("head->num: %d\n", head->num);   // head 노드의 num 출력
    printf("head->next->num: %d\n", head->next->num);   // next 노드의 num 출력

    printf("list all: ");
    current = head;     // current에 헤드노드 할당
    while (current != NULL) {       // current가 NULL 이 아닐동안
        printf("%d ", current->num);    // current의 num 출력
        current = current->next;        // current를 current.next 로 변경
    }
    printf("\n");

    return 0;
}

// 출력:
//  head->num: 10
//  head->next->num: 20
//  list all: 10 20 30 