#include <stdio.h>
#include <stdlib.h>


int main (void) {


    char num_str_1 [] = "123";
    char num_str_2 [] = "1234";
    char num_str_3 [] = "123.45";

    // atoi는 문자열로 되어있는 숫자를 int 정수로 바꿔주는 함수입니다.
    // atof는 문자열로 되어 있는 소수를 double로 바꿔주는 함수입니다.
    int num_1 = atoi(num_str_1);
    long num_2 = atol(num_str_2);
    double num_3 = atof(num_str_3);

    printf("num_1 value : %d\n", num_1);
    printf("num_2 value : %ld\n", num_2);
    printf("num_3 value : %f\n", num_3);


    return 0;

}