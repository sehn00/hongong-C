#pragma pack(1)     // 구조체 멤버들을 1 byte 단위로 채워서 "패딩을 없앰"
struct Packet {
    char id;        // 1 byte   ( + 원래라면 padding 들어가지만, 이제 안들어감)
    int len;        // 4 byte
};
#pragma pack()      // 원래 정렬 방식으로 복원

// #pragma pack(1): 패딩을 없애는 지시문
//  - 성능저하: CPU는 보통 4 or 8 byte 정렬된 데이터를 더 빨리 읽음... 패킹하면 느려짐
// HW 레지스터 매핑, 네트워크 패킷, 파일 포맷 처럼 정해진 byte 배열 그대로 맞춰야할때 사용