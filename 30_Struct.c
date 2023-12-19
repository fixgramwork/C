#include <stdio.h>

// 학생 관리용 프로그램
// 이름, 성적, 주소, 생년월일




int main() {
    char name[30];
    int math;   // 수학성적
    char address[50];
    int birthday;

    // 여러명의 학생의 데이타를 저장하려면 어떻게 해야 하나요?
    // 1. 각각의 학생 데이타 저장변수
    char name0[30];
    int math0;
    char address0[50];
    int birthday0;

    char name1[30];
    int math1;
    char address1[50];
    int birthday1;

    char name2[30];
    int math2;
    char address2[50];
    int birthday2;

    // 2. 배열
    char nameArray[100][30];
    int mathArray[100];
    char address23[100][50];
    int birthday23;


    // 3. 구조체
    // 서로연관성있는 데이타를 하나로 묶어주는 기능합니다.
    // 새로운 데이타타입을 생성합니다.

    // struct 구조체명 {
    //  데이타;
    // }

    struct Student { // 사용자 정의 데이타 타입
        char name[30];   // <= 구조체 멤버
        int math;
        char address[50];
        int birthday;
    };

    // struct Student 라는 데이타 타입을 만든겁니다.
    struct Student a; // a라는 구조체 변수를 만듦

    // 구조체변수로 구조체 멤버에 접근할때
    // .(period)연산자


    a.name[0] = 'M';
    a.name[1] = '0';
    a.name[2] = 'N';
    a.name[3] = '\0';

    a.math = 80;

    strcpy(a.address, "서울시 강남구");
    a.birthday = 222222222;

    printf("이름: %s\n", a.name);
    printf("수학점수: %d\n", a.math);
    printf("주소: %s\n", a.address);
    printf("생일: %d", a.birthday);

    return 0;
}
