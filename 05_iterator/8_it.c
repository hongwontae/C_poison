#include <stdio.h>

int main (void) {


    int num = 1;
    int count = 1;

    printf("1 ~ 9 숫자 중 하나를 입력해주세요\n");
    scanf("%d", &num);
    printf("\n");

    if (num < 1 || num > 9) {
        printf("숫자를 9로 조정합니다.");
        num = 9;
    }

    while (num >= count) {

        printf("*\n");
        count++;
    }


    return 0 ;
}