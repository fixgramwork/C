#include <stdio.h>

// 반복되는 명령문을 하나로 묶어서 하나의 단위로 만들어주는 기능입니다.
// 함수

// returnType 함수명(매개변수) {
//  명령문;
// }

// returnType은 함수가 함수의 블럭의 명령문을 처리하고 결과을 어떤 데이타 타입
// 으로 전달할 것이냐.
// returnType이 있는 경우에는 반드시 return문이 있어야 합니다.
// return 문의 역활은 함수 블럭에 묶여있는 명령어를 처리하고 처리된 결과값을
// 함수의 외부로 전달하는  역활을 합니다.
// returnType 없는 경우에는 returnType을 void로 지정하시면됩니다.

void PrintMonster5(int count) {

    for (int i = 0; i < count; i++) {
        printf("Monster\n");
    }
}

// 함수를 사용할 때의 장점
// 재사용성
// 모듈성
// 가독성

// 유용한 명령어를 하나로 묶어서 하나의 단위로 만들때 사용합니다.

// 매개변수(Parameter) 함수를 호출할 때 함수로 전달되는 인자값을 저장하는 변수
// returntype 함수명(매개변수){   
//    명령문;
//}
int add(int a, int b) {
    int temp = 0;

    temp = a + b;

    return temp;   // return 
}


int main() {

    // Monster 문자열 5번 출력
    // 함수를 호출할때 전달되는 값을 인자(argument)값이라고 합니다.
    PrintMonster5(5);

    //....

    // Monster 문자열 5번 출력

    PrintMonster5(5);

    // ...


    // Monster 문자열 5번 출력
    PrintMonster5(5);

    int a = 20;
    int b = 30;

    int ret = add(a, b);

    printf("%d + %d = %d\n", a, b, ret);

    return 0;
}
