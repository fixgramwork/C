#include <stdio.h>

int main() {
    int count = 0;
    int count2 = 100;
    int count3 = 1000;

    int flag = 0;
    // 1.삼중으로 중첩된 while문을 탈출할때 break문을 사용
    while (1) {
        count = 1000;
        count2 = 100;
        count3 = 1000;

        while (count > 0) {
            count--;
            count2 = 100;

            while (count2 > 0) {
                count2--;
                count3 = 1000;

                while (count3 > 0) {
                    count3--;

                    printf("count = %d, count2 = %d, count3 = %d\n",
                        count, count2, count3);

                    if (count > 10 && count2 > 50 && count3 < 300) {
                        flag = 1;

                        break;
                    }
                }

                if (flag == 1) break;
            }
            if (flag == 1) break;
        }
        if (flag == 1) break;
    }

    // 2. 삼중으로 중첩된 while문을 탈출 할때 goto문 사용
    while (1) {
        count = 1000;
        count2 = 100;
        count3 = 1000;

        while (count > 0) {
            count--;
            count2 = 100;

            while (count2 > 0) {
                count2--;
                count3 = 1000;

                while (count3 > 0) {
                    count3--;

                    printf("count = %d, count2 = %d, count3 = %d\n",
                        count, count2, count3);

                    if (count > 10 && count2 > 50 && count3 < 300) {
                        flag = 1;

                        goto LoopExit;
                    }
                }


            }

        }
    }

LoopExit:



    return 0;
}
