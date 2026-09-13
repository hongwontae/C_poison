#include <stdio.h>

int main(void)
{

    // 배열을 오름차순으로 정렬하세요.

    int num_set[] = {100, 200, 500, 400, 90, 30};
    // num_set_size = 6;
    size_t num_set_size = sizeof(num_set) / sizeof(num_set[1]);

    // num_set[i] -> 첫 번째 요소일 떄 2,3,4,5,6 전부 돌아야 함
    // 또한 첫 루프가 끝나면 2번 쨰 요소가 3,4,5,6를 전부 돌아야 함
    for (int i = 0; i < num_set_size; ++i)
    {
        for (int n = i + 1; n < num_set_size; ++n)
        {
            if (num_set[i] > num_set[n])
            {
                int bucket = num_set[i];
                num_set[i] = num_set[n];
                num_set[n] = bucket;
            }
        }
    }

    for (int i = 0; i < num_set_size; i++)
    {
        printf("num_set[%d] = %d\n", i, num_set[i]);
    }

    return 0;
}