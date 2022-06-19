#include <stdio.h>

#define SECONDS_PER_YEAR 3.156E10

int main(void)
{
    int age;
    printf("input your age: ");
    scanf("%d", &age);
    printf("transfer to seconds is: %.0fs", age * SECONDS_PER_YEAR);
    return 0;
}