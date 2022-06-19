#include <stdio.h>

int main(void)
{
    float toobig = 3.4E38 * 100.0f;
    float toosmall = -3.4E38 * 100.0f;
    printf("%e\n", toobig);
    printf("%e\n", toosmall);
    return 0;
}