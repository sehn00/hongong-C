#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        // i가 3의 배수면 이번 반복 건너뛰기 - continue
        if (i % 3 == 0) {
            printf("continue 실행: %d\n", i);
            continue;
        }

        // i가 8이면 반복 종료 - break
        if (i == 8) {
            printf("break 실행: %d\n", i);
            break;
        }

        printf("현재 i: %d\n", i);
    }

    return 0;
}
