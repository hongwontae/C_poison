#include <stdio.h>

int main(void)
{

    int row_col[5][5] = {0};

    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            ++count;
            row_col[i][k] = count;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 5; k++)
        {
           printf("%d \t", row_col[i][k]);
        }
        printf("\n");
    }

    return 0;
}