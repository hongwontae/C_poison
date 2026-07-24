#include <stdio.h>

int getScore(){

    int score = 0;

    printf("정수를 입력해주세요.\n");
    scanf("%d", &score);

    return score;
}

int calculation(int s1, int s2, int s3){
    int max_v = s1;

    if(max_v < s2){
        max_v = s2;
    }
    if(max_v < s3){
        max_v = s3;
    }

    return max_v;


}



int main (void) {

    int user_score_1 = getScore();
    int user_score_2 = getScore();
    int user_score_3 = getScore();

    int max_value = calculation(user_score_1, user_score_2, user_score_3);

    printf("최댓값은 %d입니다.\n", max_value);

    return 0;


}