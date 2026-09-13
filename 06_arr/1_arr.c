#include <stdio.h>
#include <stdlib.h>

int main (void) {

    // int 배열이 존재하고 각 값은 랜덤하게 나열되어 있습니다.
    // 이 때 가장 큰 값을 구하시오.

    int num_set [] = {40, 50, 10, 70, 80, 30, 100};

    size_t num_set_size = sizeof(num_set)/sizeof(num_set[0]);

    int * m_p = (int *) malloc(num_set_size);


    for (int i = 0; i < num_set_size; ++i) {
        m_p[i] = num_set[i];
    }

    for (int i = 0; i < num_set_size; ++i) {
        printf("m_p[%d] = %d\n", i, m_p[i]);
    }


    int max_num = 0;

    for (int n = 0; n < num_set_size; ++n) {
        if (max_num < m_p[n]) {
            max_num = m_p[n];
        }
    }

    printf("가장 큰 수는 %d 입니다.\n", max_num);


    return 0;

}