#include <stdio.h>


int main (void) {

    unsigned int number1 = 0;
    unsigned int number2 = 0;
    unsigned int number3 = 0;

    int result = 0;

    printf("세 개의 정수를 입력해주세요. 가장 큰 수를 알려드리겠습니다. 지금 첫 번째 정수를 입력해주세요.\n");

    scanf("%d", &number1);
    printf("현재 가장 큰 수는 %d입니다.\n", number1);

    printf("다음 수를 알려주세요.\n");

    scanf("%d", &number2);
    result = number1 < number2 ? number2 : number1;
    printf("현재 가장 큰 수는 %d 입니다.\n", result);


    printf("다음 수를 알려주세요.\n");

    scanf("%d", &number3);
    result = result < number3 ? number3 : result;
    printf("현재 가장 큰 수는 %d 입니다.\n", result);





    



    return 0;

}