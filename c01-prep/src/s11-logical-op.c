#include <stdio.h>

int main()
{
    int a = 30, bl;

    bl = (a > 10) && (a < 20);
    printf("(a > 10) && (a < 20): %d\n", bl);   // && = and
    
    bl = (a < 10) || (a > 20);
    printf("(a < 10) || (a > 20): %d\n", bl);   // || = or

    return 0;
}