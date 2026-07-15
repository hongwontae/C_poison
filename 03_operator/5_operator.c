#include <stdio.h>

int main (void) {

    // int num1 = 0, num2 = 0;

    // printf("두 개의 정수를 입력해주세요.\n");
    // scanf("%d %d", &num1, &num2 );

    // printf("처음 입력한 값은 %d이고 두 번쨰 입력한 값은 %d입니다.\n", num1, num2);

    // printf("단순 대입 연산자로 바꾸겠습니다.\n");

    // int bucket_1 = 0;
    // int bucket_2 = 0;

    // bucket_1 = num1;
    // bucket_2 = num2;

    // num1 = bucket_2;
    // num2 = bucket_1;


    // printf("%d, %d\n", num1, num2);

    int a = 3, b =4, tmp = 0;

    printf("a : %d b : %d\n", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("a : %d b : %d\n", a, b);



    return 0;
} 