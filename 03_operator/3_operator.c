#include <stdio.h>

int main () {


    int num1;
    int num2;

    printf("두 정수를 입력하세요\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("AVG : %.2f\n", (num1+num2)/2.0);

    return 0;
}