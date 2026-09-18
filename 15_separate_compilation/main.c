#include <stdio.h>
#include "calculator.h"

int main(void)
{
    int result1 = add(10, 20);
    int result2 = subtract(20, 10);

    printf("%d\n", result1);
    printf("%d\n", result2);

    return 0;
}