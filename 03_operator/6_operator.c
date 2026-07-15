#include <stdio.h>

int main () {

    int input_value = 0;
    int store_value = 0;

    printf("세 정수의 합을 구하겠습니다. 첫 번째 정수 입력해주세요\n");
    scanf("%d", &input_value);
    store_value+=input_value;

    printf("두 번쨰 정수 입력해주세요\n");
    scanf("%d", &input_value);
    store_value+=input_value;

    printf("세 번쨰 정수 입력해주세요\n");
    scanf("%d", &input_value);
    store_value+=input_value;

    printf("세 정수의 총합은 %d입니다.\n", store_value);


    return 0;
}