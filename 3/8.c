#include <stdio.h>

#define B_PER_PINT 2.0
#define OUNCE_PER_B 8.0
#define DTS_PER_OUNCE 2.0
#define CS_PER_DTS 3.0

int main(void)
{
    int b;
    printf("input b: ");
    scanf("%d", &b);
    float pint = b / B_PER_PINT;
    float ounce = b * OUNCE_PER_B;
    float dts = ounce * DTS_PER_OUNCE;
    float cs = dts * CS_PER_DTS;
    printf("pint: %f\n", pint);
    printf("ounce: %f\n", ounce);
    printf("dts: %f\n", dts);
    printf("cs: %f\n", cs);
    return 0;
}