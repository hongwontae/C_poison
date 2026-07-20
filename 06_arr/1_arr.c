#include <stdio.h>

int main (void) {

    int a_list [7] = {50, 40, 30, 20, 10, 70, 90};
    int max_num = 0;

    size_t length = sizeof(a_list)/sizeof(a_list[0]);

    for (int i = 0; i < length; i ++) {
        if(max_num < a_list[i]){
            max_num = a_list[i];
        } 
    }

    printf("가장 큰 수는 %d 입니다.\n", max_num);


    return 0;
}