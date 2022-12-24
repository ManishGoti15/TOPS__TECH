/*
        A
        A  B
        A  B  C
        A  B  C  D
        A  B  C  D  E
*/

#include <stdio.h>
int main()
{
    int row, col;
    for (row = 65; row <= 69; row++)
    {
        for (col = 65; col <= row; col++)
            printf("%c", col);
        printf("\n");
    }
    return 0;
}