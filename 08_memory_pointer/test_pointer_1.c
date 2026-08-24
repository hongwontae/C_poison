#include <stdio.h>

int main () {

    // 둘 다 8 -> 8byte / 즉, 주소 자체의 크기는 8byte
    printf("char* 주소 크기 = %zu\n", sizeof(char*));
    printf("int* 주소 크기 = %zu\n", sizeof(int*));

    int num = 0;
    char nn = 'H';

    printf("num 주소 : %p\n", &num);
    printf("char 주소 : %p\n", &nn);

    int * num_p = &num;
    char * nn_p = &nn;

    printf("%p\n", num_p);
    printf("%p\n", nn_p);


    return 0;
}

// 8byte -> 64bit
// 16진수 한 자리는 2^4 -> 4bit -> 보이는 주소값은 12개 -> 48bit?
// 그게 아니라 앞에 0들이 생략되서 나옵니다.