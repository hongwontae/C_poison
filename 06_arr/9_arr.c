#include <stdio.h>

int main (void) {


    int name_1 [] = {1,2,3,4,5,6,7,8,9,10};

    size_t total_length = sizeof(name_1);
    size_t part_length = sizeof(name_1[0]);

    printf("total_len : %zu\n", total_length);
    printf("part_len : %zu\n", part_length);


    printf("\n");

    int ramdom_number [] = {10, 20, 30, 40, 50};
    int max_num = 0;

    size_t length = sizeof(ramdom_number) / sizeof(ramdom_number[0]);

    for (int i = 0; i < length; i ++) {
        if (max_num < ramdom_number[i]) {
            max_num = ramdom_number[i];
        }
    }

    printf("가장 큰 수는 %d입니다.\n", max_num);
    


    return 0;
}