#include <stdio.h>

// 이차원 배열

int main() {
    int array[5];
    int array2[5][5];

    int* parray = array; // <= DataType?

    int(*parray2)[5] = array2;


    array2[2][2] = 1000; // 배열식

    *(*(array2 + 2) + 2) = 1000;   // 포인터식


    array2[1][1] = 2000;

    *(*(array2 + 1) + 1) = 2000;





    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            array2[i][j] = i * 5; j;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("array2[%d][%d] = %d\n", i, j, array2[i][j]);
        }
    }

    return 0;
}
