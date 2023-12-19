#include <stdio.h>

#include <stdio.h>

int main() {
    int money = 0;

    printf("용돈 금액을 입력하세요: ");
    scanf_s("%d", &money);

    // 다중조건문을 쓸때 걸릴 확률이 많은 것을 앞쪽에 놓는 것이 유리합니다.
    if (money <= 80000 && money > 60000) {
        printf("PC방");
    }
    else if (money > 100000) {   // 다중 조건문
        printf("친구만남");
    }
    else if (money <= 100000 && money > 80000) {
        printf("볼링장");
    }
    else if (money <= 60000 && money > 40000) {
        printf("당구장");
    }
    else {
        printf("낮잠");
    }

    return 0;
}
