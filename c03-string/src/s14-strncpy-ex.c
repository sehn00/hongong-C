#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "mango tree";
    strncpy(str, "apple-pie", 5);
    printf("%s\n", str);    // 출력: apple tree
    // 출력이 "apple"만 되게 하고 싶으면?
    //  -> apple 복수 후 별도로 널문자('\0') 추가해야함! (str[5] = '\0')

    return 0;
}


// strncpy == string copy with n limit
// strncpy(복사받을 배열명, 복사할 문자열, 복사할 문자 수);