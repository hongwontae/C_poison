#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool is_a = false;
    bool is_b = false;

    int n_input = 0;
    printf("숫자를 입력해주세요\n");
    scanf("%d", &n_input);

    if (n_input > 0)
    {
        is_a = true;
    }
    else
    {
        goto CLEAN_UP;
    }

    printf("숫자를 입력해주세요\n");
    scanf("%d", &n_input);

    if (n_input > 0)
    {
        is_b = true;
    }
    else
    {
        goto CLEAN_UP;
    }

    printf("%d %d \n", is_a, is_b);

    return 0;

CLEAN_UP:
    if (is_a)
        is_a = false;
    if (is_b)
        is_b = false;
    printf("false로 초기화\n");
}