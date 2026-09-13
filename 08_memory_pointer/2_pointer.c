#include <stdio.h>

int main (void) {

    // 문자열 배열 / 포인터
    // 문자열과 주소를 포인터를 통해서 print
    // 길이를 알아내는데 이 떄 주소를 사용한다.

    char name [] = "Hello-Wolrd";

    // name은 첫 번쨰 배열 요소의 주소값입니다. -> char 1 byte -> 1 byte 씩 이동하면 올바른 값과 주소가 나옴
    // 이 떄 배열 괄호 연산자를 name_p에 사용하면 컴파일러 이 정보를 알고 있기에 1 byte 씩 이동하며 적합한 값을 가져옵니다.
    char * name_p = name;

    int count = 0;

    // \0 까지 세면 문자열 개수가 아닐듯? -> 길이 - 1이 나옵니다.
    // \0이 되면 while문이 종료되고 count ++이 적용되지 않기 떄문입니다.
    while (name_p[count] != '\0') {
        printf("name_p를 통해 문자열 보기 %c \n", name_p[count]);
        printf("name_p를 통해 주소 보기 %p \n", &name_p[count]);
        count++;
    }

    count+=1;

    printf("count : %d\n", count);

    // 정확한 길이가 나옵니다.
    // 마지막 길이의 주소와 가장 첫 번쨰 길이를 뺍니다. -> char 배열은 1byte 씩 쭉 나열됩니다.
    // 그렇기에 주소 - 주소 = 길이
    int question = &name_p[count] - name;

    printf("address : %d\n", question);


    return 0;



}