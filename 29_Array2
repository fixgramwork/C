#include <stdio.h>

int main() {
    float array[10];

    float* parray = array;


    float array2[] = { 1.2f, 3.4f, 10.3f, 7.5f, 11.4f, 100.5f };;

    // 배열의 요소의 갯수를 구한다.
    // sizeof(array2) : 배열에 할당된 전체 바이트 수
    // sizeof(array2[0]) : 배열의 요소의 바이트 수
    // 전체바이트 수 / 요소의 바이트 수 = 요소의 개수
    int length = sizeof(array2) / sizeof(array2[0]);

    for (int i = 0; i < length; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}
