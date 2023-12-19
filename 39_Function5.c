#include <stdio.h>

// 자동변수의 주소값을 함수외부로 전달해서 사용하면 안됨
// 주소값으로 해당 공간에 접근할 수는 있지만 해당공간의 값이 계속 유지 될거라는 
// 보장을 할 수가 없습니다.
int* pSetScore(int value) {
    int sum = 0;   // 자동변수

    sum += value;

    return &sum;   // 함수 블럭안에서 만들어진 sum 자동변수의 주소값을
    // 함수 외부로 전달
}

int* pSetScoreStatic(int value) {
    static int sum = 0;   // 정적변수

    sum += value;

    return &sum;   // 함수 블럭안에 만들어진 sum 전적변수의 주소값을 함수 외부로 전달
}

int main() {
    printf("pSetScore 함수\n");
    int* pscore = pSetScore(100);
    printf("*pscore = %d\n", *pscore);//100
    printf("*pscore = %d\n", *pscore);//14
    printf("*pscore = %d\n", *pscore);//15

    printf("\npSetScoreStatic\n");
    pscore = pSetScoreStatic(2000);
    printf("*pscore = %d\n", *pscore);//2000
    printf("*pscore = %d\n", *pscore);//2000
    printf("*pscore = %d\n", *pscore);//2000


}
