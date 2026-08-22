#include <stdio.h>

int main (void) {

    int num1 = 0;
    int num2 = 0;

    scanf("%d %d", &num1, &num2);


    printf("%d\n", ~num2);
    
    num2 = ~num2+1;
    printf("num2 = %d\n", num2);
    printf("뺸 값은 %d\n", num1+num2);


    return 0;
}