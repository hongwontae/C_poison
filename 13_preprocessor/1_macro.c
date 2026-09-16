#include <stdio.h>
#define PRINT(x) printf(#x);

#define MAKE_VAR(n1, n2) n1##n2;


int main (void) {

    int num1 = 10;

    int num2 = MAKE_VAR(num, 1);

    printf("num2 = %d\n", num2);

    return 0;
}