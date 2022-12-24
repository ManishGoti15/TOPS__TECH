#include <stdio.h>

int main()
{
    int i, fact = 1;
    for (i = 6; i >= 1; i--)
    {
        fact *= i;
    }
    printf("Factorial of 6 is %d", fact);

    return 0;
}