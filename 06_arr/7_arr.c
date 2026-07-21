#include <stdio.h>

int main (void) {

    // 행 인덱스가 홀수라면 정으로 나열하고 짝수라면 역으로 나열합니다.
    // 행의 개수와 열의 개수는 5개입니다.
    int a_list[5][5] = {0};
    int cnt = 0;

    // i는 행을 의미합니다.
    for (int i = 0; i < 5; i++){

        if(i % 2 == 0){
            // 짝수
            for(int j = 0; j < 5; j++){
                // j는 열을 의미합니다.
                // 순차적으로 1부터 들어갑니다. -> 하나의 행에
                ++cnt;
                a_list[i][j] = cnt;
            }
            
        
        } else{
        // else -> 짝수가 아니라면 홀수이기에 행 홀 논리가 들어갑니다.
        for(int j = 4; j>=0; j--){
            // j는 열을 의미합니다.
            // 역으로 들어가야 합니다. 그렇다면 초기값을 인덱스 열 마지막 값으로 지정해서 순차적 나열
            ++cnt;
            a_list[i][j] = cnt;
        }
        }


    }

    for (int i =0; i < 5; i++){
        for(int j=0; j <5; j++){
            printf("%d \t", a_list[i][j]);
        }
        printf("\n");
    }



    return 0;

}