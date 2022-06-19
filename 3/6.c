#include <stdio.h>

#define MOLECULE_WEIGHT 3.0E-23
#define G_PER_QUART 950

int main(void)
{
    double quart;
    printf("input your quart: ");
    scanf("%lf", &quart);
    printf("the water has molecule count is: %e", quart * G_PER_QUART / MOLECULE_WEIGHT);
    return 0;
}