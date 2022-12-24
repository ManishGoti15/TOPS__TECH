#include <stdio.h>

int main()
{
    int number_of_days, years, months, days;

    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    years = number_of_days / 365;

    // months = (number_of_days - years * 365 / 30);

    days = (number_of_days - years * 365 - months * 30);

    printf("Years = %d", years);
    // printf("\nMonths = %d", months);
    printf("\nDays = %d", days);

    return 0;
}
