#include <stdio.h>

int main (void){

    for (int i =0; i < 5; i ++) {
        for (int j = 4; i < j; j--) {
            // j가 4일 떄 i가 0이면 4번 실행
            // j가 4일 떄 i가 1이면 3번 실행
            // j가 4일 떄 i가 2면 2번 실행
           printf(" ");
        }

        for (int k = 0; k<=i; k ++) {
            // k가 0이고 i가 0일 떄 1번 실행 
            // k가 0이고 i가 1일 떄 2번실행
            printf("*");
            
        }

        printf("\n");
    }

    // i = 0 -> j = 0,1,2,3,4 -> 탭 4
    // i = 1 -> j = 0,1,2,3,4 -> 탭 3
    // 



}