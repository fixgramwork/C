#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 10;

    // malloc은 동적메모리 공간을 할당받고 초기화를 하지 않습니다.
    double* parray = (double*)malloc(sizeof(double) * size);   // 동적메모리 공간할당

    printf("malloc\n");

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }

    free(parray);   // 동적 메모리 반환

    printf("\n\n");

    // calloc은 할당한 후에 0으로 초기화를 한다.
    parray = (double*)calloc(size, sizeof(double));

    printf("calloc\n");
    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %ld\n", i, parray[i]);
    }

    printf("\n\n");
    size = 20;

    printf("realloc\n");
    // realloc은 할당 받은 메모리공간을 재할당할때 사용한다.
    parray = (double*)realloc(parray, sizeof(double) * size);

    for (int i = 0; i < size; i++) {
        printf("parray[%d] = %lf\n", i, parray[i]);
    }


    printf("\n\nprintArray\n");

    // double 형 저장공간을 int*공간으로 바꿈
    int* pintArray = (int*)parray;

    for (int i = 0; i < size * 2; i++) {
        pintArray[i] = i;
    }

    for (int i = 0; i < size * 2; i++) {
        printf("pintArray[%d] = %d\n", i, pintArray[i]);
    }

    free(pintArray);


    return 0;
}
