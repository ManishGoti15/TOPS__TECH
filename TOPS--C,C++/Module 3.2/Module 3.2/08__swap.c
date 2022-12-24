#include <stdio.h>

int main()
{

    int a = 56, b = 96;

    printf("The value of a before swap is %d\n", a);
    printf("The value of b before swap is %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("The value of a after swap is %d\n", a);
    printf("The value of b after swap is %d\n", b);
    return 0;
}