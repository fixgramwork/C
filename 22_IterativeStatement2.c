#include <stdio.h>

// while문
// 반복횟수를 모르는 경우에 사용하기 좋은 구조입니다.
// 반복횟수는 모르지만 while문의 조건을 만족하면 
// 얼마든지 반복해도 상관없는 로직을 만들때 


int main() {
    float value = 123.123123f;

    printf("while\n");
    while (value > 0) {
        value -= 23.23f;

        printf("while value = %f\n", value);
    }

    printf("\n\ndo-while\n");
    do {
        value -= 23.234f;

        printf("do - while value = %f\n", value);
    } while (value > 0)



        return 0;
}
