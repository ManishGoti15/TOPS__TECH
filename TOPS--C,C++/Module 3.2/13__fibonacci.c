#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, i;
    printf("%d %d ", a, b);
    for (i = 5; i <= 19; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}