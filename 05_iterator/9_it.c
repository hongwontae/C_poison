#include <stdio.h>

int main (void) {


    int num = 0;

    printf("몇 단을 출력할까요? 숫자를 입력해주세요.\n");
    scanf("%d", & num);

    printf("\n");

    for (int i = 1; i < 11; i ++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }


    printf("\n");

    int acc = 0;
    int i = 1;

    printf("1~10까지 총합은?\n");

    while (i <= 10) {
        acc +=i;
        i++;
    }

    printf("총합은 %d입니다.\n", acc);


    int acc2 = 0;

    for (int i =1; i <= 10; i ++) {
        acc2+=i;
    }

    printf("총합은 %d입니다.\n", acc2);


    return 0;
}