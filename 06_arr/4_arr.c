#include <stdio.h>

int main (void) {

    // 제일 작은 인덱스를 찾고 나중에 바꿔라

    int a_list [] = {3, 5, 1, 2, 4};

    size_t length = sizeof(a_list) / sizeof(a_list[0]);

    int min_index = 0;

    for (int i = 0; i < length-1; i++) {

        min_index = i;

        // 이 작업은 처음부터 비교해서 가장 낮은 수를 가진 배열 요소의 인덱스를 찾아서 
        // 대입하는 과정입니다. -> 이 작업 후 min_index에는 가장 작은 요소의 인덱스가 들어갑니다.
        // a_list[i] > a_list[j]로 망상함 -> i가 1, 2, 3.. 이렇게 순차적으로만 움직입니다.
        // min index는 로직 상 인덱스 0에만 존재해야 하는데 갑자기 min_index의 위치가 2,3이 되어 비교하는 망상함
        for (int j = i+1; j < length; j++) {    
            if(a_list[min_index] > a_list[j]){
                min_index = j;
            }
        }

        // min_index가 i가 아니라면 즉, 기준이 벗어났다면 -> 변경을 해주어야 합니다.
        if (min_index != i){
            int tmp = 0;
            tmp = a_list[i];
            a_list[i] = a_list[min_index];
            a_list[min_index] = tmp;
        }
    
    }

    for (int k = 0; k < length; k++){
        printf("%d \n", a_list[k]);
    }

    

    return 0;
}