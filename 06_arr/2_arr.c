#include <stdio.h>

int main(void)
{

    int a_list[] = {10, 20, 30, 40, 9, 5};
    size_t length = sizeof(a_list) / sizeof(a_list[0]);

    for (int i = 0; i < length; i++)
    {
        if (a_list[0] > a_list[i])
        {
            int bucket = a_list[0];
            a_list[0] = a_list[i];
            a_list[i] = bucket;
        }
    }

    printf("가장 작은 수는 %d 입니다.\n", a_list[0]);
    
    for (int j = 0; j < length; j++) {
        printf("현재 배열 값은 차례대로 %d\n", a_list[j]);
    }

    return 0;
}