#include <stdio.h>

int main (void) {

    int input = 1;

    printf("구구단 출력표 10개\n");
    printf("몇 단 출력할까요? (정수로 부탁합니다.) \n ");
    scanf("%d", &input);
    

    for (int i = 1; i <= 10 ; i++ ) {
        printf("%d * %d = %d \n", input, i, input*i);
    }


    return 0;
}