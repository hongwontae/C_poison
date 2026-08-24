#include <stdio.h>

int main (void) {

    int num1 = 0;
    int num2 = 0;

    char operator;

    printf("숫자 두 개와 오퍼레이터를 받아서 연산을 실행합니다.\n");
    printf("숫자 하나를 입력해주세요\n");
    scanf("%d", &num1);

    printf("\n");

    printf("숫자 하나를 입력해주세요\n");
    scanf("%d", &num2);

    printf("\n");

    printf("사용할 연산자를 입력해주세요. (+, -, *, /)\n");
    scanf(" %c", &operator);

    printf("\n");

    switch (operator){
        case '+' :
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case '-' :
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case '*' :
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case '/' :
            printf("%d / %d = %d\n", num1, num2, num1/num2);
            break;
        default :
            printf("사용할 연산자는 +, -, *, / 중 하나입니다.\n");
            break;
    }


    return 0;
}