#include <stdio.h>

int main() {
    // 반복문
    // for, while, do-while

    // for(초기식; 조건식; 증감식){
    //   명령어;
    // }

    // for문은 반복횟수를 아는 경우에 사용하기 좋은 구조입니다.
    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    int count = 0;
    for (; count > 0; ) {
        count++;

        printf("count = %d\n", count);

        if (count > 10) break;   // break문이 선언된 위치에서 가장가까운 
        //반복문을 탈출할때 사용합니다.
    }

    // ,(쉼표연산자) 문자을 이어서 작동서 작동시킬때 사용
    for (int i = 0, j = 10; i < 10 && j > 0; i += 2, j = j - 2) {
        printf("i = %d, j = %d\n", i, j);
    }

    // 반복문 중첩이 가능합니다.
    for (int i = 0; i < 10; i++) {   // 이중 for 문
        for (int j = 0; j < 10; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }


    return 0;
}
