/*
    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15
*/
#include <stdio.h>
int main()
{
    int n, r, c;
    int a = 1, b;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (r = 1; r <= n; r++)
    {
        b = a + r - 1;
        for (c = 1; c <= r; c++, a++)
        {
            if (r % 2 == 1)
                printf("%5d", a);
            else
                printf("%5d", b--);
        }

        printf("\n");
    }

    return 0;
}