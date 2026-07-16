#include <stdio.h>

int main (void) {

    int input = 0;
    int result = 0;

    printf("가장 큰 수를 출력하겠습니다.\n");

    printf("세 숫자를 받겠습니다. 지금 하나의 숫자를 입력해주세요.\n");
    scanf("%d", &input);
    result = input;
    printf("현재 가장 큰 수는 %d입니다.\n", result);

    printf("두 번쨰 숫자를 입력해주세요.\n");
    scanf("%d", &input);
    if (input > result) {
        result = input;
    }
    printf("현재 가장 큰 수는 %d입니다.\n", result);

    printf("세 번쨰 숫자를 입력해주세요\n");
    scanf("%d", &input);
    if (input > result){
        result = input;
    }
    printf("현재 가장 큰 수는 %d입니다\n", result);


    return 0;
}