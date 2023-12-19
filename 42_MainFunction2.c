#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        int value = atoi(argv[i]);   // atoi : 숫자문자열을 정수값으로 변경해준다.

        printf("%d ", value);

        if (i < argc - 1) {
            printf("+ ");
        }

        sum += value;
    }

    printf(" = %d\n", sum);

    return 0;
}
