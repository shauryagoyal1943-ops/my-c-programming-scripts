#include <stdio.h>

int main(void)
{
    int a = 90;
    int b = 89;
    int c = 95;
    int d = 88;
    int e = 92;
    int sum = a + b + c + d + e;
    float percent = sum / 5.0f;
    printf("The percentage is: %.2f%%\n", percent);
    return 0;
}
