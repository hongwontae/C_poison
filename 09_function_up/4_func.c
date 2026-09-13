#include <stdio.h>

// get_factorial를 호출하면 if 문 검사를 하고 return get_fa..를 만납ㄴ다.
// 이 떄 함수가 호출됩니다. -> Call Stack에 쌓이고 되는데 이 떄 if문을 실행하고 나서 나머지 코드가 쌓이는 것입니다.
// 그렇다면 param이 1이 되는 순간 return 1이 되면서 각 스택의 get_factorial() return 값이 붙게 되면서 곱셈 연산 후 전달됩니다.

int get_factorial (int param) {

    if (param == 1) {
        return 1;
    }

    return get_factorial(param-1) * param;

}


int main (void){

    int aa = get_factorial(5);

    printf("aa-value : %d\n", aa);

    return 0;

}