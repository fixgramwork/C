#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct tagMonster {
    char name[20];
    int health;
    int attack;
    int defense;
};

typedef struct tagMonster Monster;   // typedef 연산자를 사용해서
// struct tagMonster 구조체 타입을
// Monster라는 이름으로 사용할수 있도록
// 재정의함

int main() {

    Monster array[3]; // 구조체 배열

    for (int i = 0; i < 3; i++) {
        printf("몬스터 이름을 입력하세요: ");
        scanf("%s", array[i].name);

        printf("몬스터 생명력을 입력하세요: ");
        scanf("%d", &array[i].health);

        printf("몬스터 공격력을 입력하세요: ");
        scanf("%d", &array[i].attack);

        printf("몬스터 방어력을 입력하세요: ");
        scanf("%d", &array[i].defense);
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        printf("이름: %s, 생명력: %d, 공격력: %d, 방어력: %d\n",
            array[i].name, array[i].health, array[i].attack, array[i].defense);
    }



    return 0;
}
