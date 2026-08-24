#include <stdio.h>

int main (void) {

    int row_col_arr [3][3] = {0};
    int count = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            ++count;
            row_col_arr[i][j] = count;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            printf("%d ", row_col_arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}