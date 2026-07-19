#include <stdio.h>

int main (void){

    int i = 1;
    int count = 1;

    printf("1 ~ 9 범위의 정수를 입력해주세요.\n");
    scanf("%d", &i);

    if(i <= 0 || i >= 10){
        printf("범위를 벗어났습니다. 9로 조정합니다.\n");
        i = 9;
    }

    while (i >= count) {
        printf("* \t");
        count++;
    }

    putchar('\n');
    

    return 0;
}