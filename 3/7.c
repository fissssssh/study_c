#include <stdio.h>

#define CM_PER_INCH 2.54

int main(void)
{
    float inch;
    printf("input your height with inch: ");
    scanf("%f", &inch);
    printf("your height with cm is: %fcm", inch * CM_PER_INCH);
    return 0;
}