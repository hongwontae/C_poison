#include <stdio.h>

// 점수를 받아서 Grade를 print하는 프로그램을 만들어보자
// 이 떄 점수를 받는 함수와 Grade를 처리하는 함수 두 개 -> UI와 기능

int getScore()
{

    int score = 0;
    int flag = 1;

    while (flag)
    {
        printf("0 ~ 100 사이에서 점수를 알려주세요.\n");
        scanf("%d", &score);
        if (score >= 0 && score <= 100)
        {
            flag = 0;
        }
    }

    return score;
}

char getGrade(int score){
    if(score >= 90){
        return 'A';
    } else if (score >= 80){
        return 'B';
    } else if (score >= 70){
        return 'C';
    } else {
        return 'D';
    }
}


int main(void)
{

    int score = getScore();

    char grade = getGrade(score);

    printf("당신의 학점은 %c 입니다.\n", grade);

    return 0;
}