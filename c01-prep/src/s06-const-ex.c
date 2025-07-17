#include <stdio.h>

int main()
{
    int income = 455;
    const double tax_rate = 0.12;
    double tax = income * tax_rate;
    
    printf("tax = %.2lf\n", tax);
    return 0;
}