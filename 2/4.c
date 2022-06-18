#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    printf("\n");
    jolly();
    printf("\n");
    jolly();
    printf("\n");
    deny();
    return 0;
}

void jolly()
{
    printf("For he's a jolly good fellow!");
}

void deny()
{
    printf("Which nobody can deny!");
}