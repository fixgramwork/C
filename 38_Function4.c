#include <stdio.h>
// C언어에서 변수의 생성위치, 사용한 키워드에 따라서 변수의 성격이 달라집니다.
// 변수의 종류
// 접근범위, 존속기간
void TestPrintGlobal();   // 함수선언


int global = 10; // 외부변수, 전역변수

void SetGlobal(int value) {
    global = value;

}

int SetScore(int value) {
    // 정적변수는 정적변수가 선언된 함수가 호출될때 변수공간이 만들어지고
    // 함수가 호출끝나고 공간이 계속 유지가 됩니다.
    // 다음에 함수호출될때 유지되는 공간을 접근할 수 있습니다.
    static int score = 0; // 로컬변수, 정적변수

    score += value;

    return score;
}



int main() {
    int a;  // 로컬변수(지역변수), 자동변수
    int b;

    {
        int a;  // 로컬변수(지역변수), 자동변수

        a = 100;
    }

    global = 200;

    SetGlobal(2000);

    TestPrintGlobal();


    for (int i = 0; i < 10; i++) {
        SetScore(i);
    }

    int sum = SetScore(0);

    printf("Sum = %d\n", sum);



    return 0;
}
