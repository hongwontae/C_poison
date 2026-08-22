#include <stdio.h>

int main () {

    int num1 = 0;
    int num2 = 0;

    printf("사용자에게 두 가지 입력을 받아서 평균을 내보겠습니다.\n");

    printf("첫 번쨰 숫자를 입력해주세요\n");
    scanf("%d", &num1);

    printf("두 번쨰 숫자를 입력해주세요\n");
    scanf("%d", &num2);

    printf("두 숫자의 평균은 %.2f 입니다. \n", (double)(num1+num2)/2);
    // 정수 연산 실수 -> 타입은 실수입니다. -> 여기선 double, 실수 리터럴은 기본적으로 double입니다.
    printf("두 숫자의 평균은 %.2f 입니다\n", (num1+num2)/2.00);
    

    return 0;

}