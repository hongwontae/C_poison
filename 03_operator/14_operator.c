#include <stdio.h>

int main (void) {


    int a =0, b=0, c=0;
    int result = 0;

    printf("세 개의 정수를 입력해주세요.\n");
    scanf("%d %d %d", &a, &b, &c);

    result = a > b ? a : b;
    result = b > c ? b : c;

    printf("가장 큰 수는 %d입니다\n", result);


    return 0;
}