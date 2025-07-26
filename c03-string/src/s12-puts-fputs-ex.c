#include <stdio.h>

int main()
{
    char str[80] = "apple juice";   
    char *ps = "banana";

    puts(str);          // 출력: apple juice(\n)
    fputs(ps, stdout);  // 출력: banana
    puts("milk");       // 출력: mill
    
    return 0;
}

// 출력
// apple juice
// bananamilk

//                  puts              fputs
// 사용법        puts(str);     fputs(str, stdout);
// 자동 줄바꿈   '\n' 자동추가    자동줄바꿈 없음('\n' 명시해야함)