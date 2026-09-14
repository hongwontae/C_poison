#include <stdio.h>

int TestFunc (void) {

    static int n_data = 10;
    ++n_data;
    return n_data;
        
}

// 원래 함수를 호출하면 Stack의 흐름에서 실행되고 return하면 지역 변수가 사라집니다.
// 그러나 static를 사용하면 변수가 Stack Frame에 존재하지 않고 전역에 존재합니다.
// 그 데이터를 지속적으로 업데이트해서 13이 됩니다.
// 이 떄 static int n_data = 10; 초기화를 한 번 하면 다음 함수에서는 다시 초기화 하지 않습니다.

int main (void) {

    printf("n_data case_1 : %d\n", TestFunc());
    printf("n_data case_1 : %d\n", TestFunc());
    printf("n_data case_1 : %d\n", TestFunc());

    return 0;
}