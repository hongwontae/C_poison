#include <stdio.h>

typedef struct BITFIELD {

    unsigned char num_1 : 1;
    unsigned char num_2 : 3;
    unsigned char num_3 : 1;
    unsigned char num_4 : 2;

} BITFIELD;


int main (void) {

    BITFIELD bit_field = {1, 5, 0, 3};

    printf("bit_field_1 : %d\n", bit_field.num_1);
    printf("bit_field_2 : %d\n", bit_field.num_2);
    printf("bit_field_3 : %d\n", bit_field.num_3);
    printf("bit_field_4 : %d\n", bit_field.num_4);

    printf("%d\n", *((unsigned char *)&bit_field));
    printf("%x\n", *((unsigned char *)&bit_field));


    return 0;
}