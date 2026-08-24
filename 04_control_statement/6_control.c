#include <stdio.h>

int main (void) {

    int input1 = 0;
    int input2 = 0;
    int input3 = 0;

    int max_num = 0;

    printf("지금부터 입력을 받고 가장 큰 수를 받겠습니다.\n");

    printf("첫 번쨰 입력 값\n");
    scanf("%d", &input1);
    max_num = input1;

    printf("가장 큰 수는 %d 입니다.\n", max_num);

    printf("두 번쨰 입력 값\n");
    scanf("%d", &input2);


    if (max_num < input2) {
        max_num = input2;
    }

    printf("가장 큰 수는 %d 입니다.\n", max_num);

    printf("세 번쨰 입력 값\n");
    scanf("%d", &input3);

    if(max_num = input3){
        max_num = input3;
    }

    printf("가장 큰 수는 %d 입니다.\n", max_num);



    return 0;
}