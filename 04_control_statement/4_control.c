#include <stdio.h>

int main (void) {

    int num1 = 0;
    int num2 = 0;

    char operator;

    printf("연산에 사용할 정수를 입력해주세요. 두 개 \n");
    scanf("%d %d", &num1, &num2);

    printf("연산에 사용할 오퍼레이터를 입력해주세요. +, -, *, / \n");
    scanf(" %c", &operator);

    switch (operator){
        case '+' :
            printf("%d %c %d = %d\n", num1, operator, num2, num1+num2);
            break;
        case '-' :
            printf("%d %c %d = %d\n", num1, operator, num2, num1-num2);
            break;
        case '*' :
            printf("%d %c %d = %d\n", num1, operator, num2, num1*num2);
            break;
        case '/' :
            printf("%d %c %d = %d\n", num1, operator, num2, num1/num2);
            break;
        default :
            printf("일치하는 오퍼레이터가 없습니다.\n");

    }


    return 0;
}