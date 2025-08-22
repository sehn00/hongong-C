// 1~45 중에 6개의 서로 다른 수를 배열에 입력하고 출력하기
// 입력한 수가 이미 저장된 수와 같으면 에러 메시지를 출력하고 다시 입력하기
// void input_nums() 에서 중복 처리하는게 한번에 안되넹.....

#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);

    return 0;
}

void input_nums(int *lotto_nums)
{
    int i, j, num, duplicated;
    
    for (i = 0; i < 6; i++) {
        do {
            duplicated = 0;
            printf("번호 입력: ");
            scanf("%d", &num);

            // 중복 체크
            for (j = 0; j < i; j++) {
                if (num == lotto_nums[j]) {
                    printf("같은 번호가 있습니다!\n");
                    duplicated = 1;
                    break;
                }
            }

        } while (duplicated);   // 중복이면 다시 입력

        lotto_nums[i] = num;
    }
}

void print_nums(int *lotto_nums)
{
    int i;

    printf("로또 번호: ");
    for (i = 0; i < 6; i++) {
        printf("%d  ", lotto_nums[i]);
    }
    printf("\n");
}