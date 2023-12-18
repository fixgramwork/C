#include <stdio.h>

// switch-case (선택문)
// 정수값의 변화에 따라서 분기처리할때 사용

int main() {
    // 0: TV ON/OFF, 1: volume up, 2: volume down

    int buttonNum = 0;
    int flag = 0;
    int isLoop = 1;

    while (isLoop) {
        printf("리모트컨트롤 버튼 번호를 입력하세요 (exit: 10): ");

        scanf_s("%d", &buttonNum);

        switch (buttonNum) {
        case 0:
            if (flag == 1) {
                flag = 0;
                printf("TV 꺼\n");
            }
            else {
                flag = 1;
                printf("TV 켜\n");
            }
            break;

        case 1:
            printf("volume up\n");
            break;

        case 2:
            printf("volume down\n");
            break;

        case 10:
            printf("리모컨을 끕니다.\n");
            isLoop = 0;
            break;

        default: // 생략가능
            printf("Wrong Number\n");
            break;
        }
    }


    if (buttonNum == 0) {

    }
    else if (buttonNum == 1) {

    }


    return 0;
}
