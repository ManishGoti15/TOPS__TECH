/*
        1
        1 0
        1 0 1
        1 0 1 0
        1 0 1 0 1
*/

#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == 3 || j == 5)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}