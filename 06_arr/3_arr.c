#include <stdio.h>

int main (void) {

    int a_list [5] = {3, 5, 1, 4, 2};
    size_t length = sizeof(a_list) / sizeof(a_list[0]);

    // i는 a_list의 index를 의미합니다. -> 이중 for문으로 고정된 index에 대한 순회를 시작
    // i < length-1 => 마지막 배열의 요소는 순회할 필요가 없습니다. -> 마지막까지 오면 다 정렬된 상태
    for (int i = 0; i < length-1; i++) {

        for (int j = i+1; j < length; j++) {

            if(a_list[i] > a_list[j]){
                int tmp;
                tmp = a_list[i];
                a_list[i] = a_list[j];
                a_list[j] = tmp;
            }

        }
    }


    
    for (int k = 0; k < length; k++) {
        printf("%d \n", a_list[k]);
    }



    return 0;
}