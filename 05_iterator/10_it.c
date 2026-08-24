#include <stdio.h>

int main (void) {

    int row = 0;
    int col = 0;

    printf("n행 n열의 사각형을 만들겠습니다. n행부터 입력해주세요.\n");
    scanf("%d", &row);

    printf("n열 입력해주세요\n");
    scanf("%d", &col);

    for (int i = 1; i <=row; i ++) {
        for (int j = 1; j <=col; j ++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}