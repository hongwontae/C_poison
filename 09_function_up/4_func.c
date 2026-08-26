#include <stdio.h>

int get_factorial (int param) {

    int n_data = 0;

    if (param == 1) {
        return 1;
    }

    // get_factorial(param-1)이 호출되어 param == 1이 만나서 return 전까지 n_data = param * 문부터 멈춥니다.
    // 모든 스택에 있는 함수들이 -> 그리고 return이 된 순간 n_data*param부터 모든 함수가 실행됩니다.
    n_data = param * get_factorial(param-1);
    return n_data;

}


int main (void){

    int aa = get_factorial(5);

    printf("aa-value : %d\n", aa);

    return 0;

}