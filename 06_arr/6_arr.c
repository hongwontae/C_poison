#include <stdio.h>

int main (void) {


    int row_col [3][4] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int col_totoal_sum = 0;


    for (int i = 0; i < 2; i++){

        int sum = 0;

        for (int k = 0 ; k < 3; k ++){
            sum += row_col[i][k];
        }

        row_col[i][3] = sum;
        col_totoal_sum += sum;
    }

    // k는 열을 의미 -> target해야 하는것은 [3행][0], [3행][1], [3행][2]
    for (int k = 0; k < 3; k++){
        int sum = 0;

        // j는 행을 의미
        for (int j = 0; j < 2; j++){
            sum += row_col[j][k];
        }

        row_col[2][k] = sum;
    }

    

 
    printf("%d\n", row_col[0][3]);
    printf("%d\n", row_col[1][3]);
    printf("%d\n", row_col[2][0]);
    printf("%d\n", row_col[2][1]);
    printf("%d\n", row_col[2][2]);
    printf("%d\n", col_totoal_sum);

    row_col[2][3] = col_totoal_sum;

    for(int i = 0; i < 3; i++){
        for(int k=0; k<4; k++){
            printf("%d \t", row_col[i][k]);
        }
        printf("\n");
    }




    return 0;
}