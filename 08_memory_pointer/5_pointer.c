#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

    int *pList = NULL, *pNewList = NULL;

    pList = (int *)malloc(sizeof(int)*3);
    memset(pList, 0, sizeof(int)*3);

    pNewList = (int *)calloc(5, sizeof(int));



    for(int i = 0; i < 3 ;i++){
        printf("%d\n", pList[i]);
    }

    printf("\n");

     for(int i = 0; i < 3 ;i++){
        printf("%d\n", pNewList[i]);
    }
    


    return 0;
}