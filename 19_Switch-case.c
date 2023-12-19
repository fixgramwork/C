#include <stdio.h>

int main() {
    int inputValue = 0;
    printf("0 ~ 10사이의 정수값을 입력하세요: ");
    scanf_s("%d", &inputValue);

    switch (inputValue) {
    case 0:
        printf("입력하신 값이 0입니다.\n");
        break;


    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    {
        int a = 20;

        //case문에 변수를 정의할때는 중괄호 블럭안에 변수를 정의해야 합니다.



    }



    printf("입력하신 값은 홀수입니다.\n");

    break;

    case 2:
    case 4:
    case 6:
    case 8:
    case 10:

        printf("입력하신 값은 짝수입니다.\n");
        break;

    default:
        printf("값을 잘못 입력하셨습니다.\n");
        break;
    }


    return 0;
}
