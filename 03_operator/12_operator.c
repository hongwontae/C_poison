#include <stdio.h>

int main (void) {

    int point = 0;
    

    printf("당신의 점수를 입력해주세요. 합격 여부를 알려드리겠습니다.\n");
    scanf("%d", &point);

    printf("%s\n", point >= 80 ? "합격" : "불합격");


    return 0;
}