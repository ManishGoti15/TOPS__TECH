#include <stdio.h>

int main()
{
    int a, b, addition, subtraction, multiplication;
    float division;

    printf("Enter two integers\n");
    scanf("%d%d", &a, &b);
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;

    printf("sum = %d\n", addition);
    printf("Difference = %d\n", subtraction);
    printf("Multiplication = %d\n", multiplication);
    printf("Division = %.2f\n", division);
    return 0;
}