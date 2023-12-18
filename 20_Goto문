#include <stdio.h>

int main() {
    int inputValue = 0;

Start: // 레이블
    printf("정수값을 입력하세요: ");
    scanf_s("%d", &inputValue);

    if (inputValue > 10) {
        goto Start;   // 무조건 분기, 상향식 분기
    }
    else if (inputValue == -1) {
        goto Exit;      // 하향식분기
    }

    printf("\ninputValue = %d\n", inputValue);

    goto Start;

    printf("Before Exit\n"); // 절대실행되지 않음.

Exit:   // 레이블

    printf("After Exit\n");

    return 0;
}
