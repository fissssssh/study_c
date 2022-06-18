#include <stdio.h>

int main(void)
{
    double inch;
    printf("input inch: ");
    scanf("%lf", &inch);
    printf("transferd to cm is: %lfcm\n", inch * 2.54f);
    return 0;
}