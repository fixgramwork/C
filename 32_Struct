#include <stdio.h>

typedef struct tagStudent {   // 사용자 정의 데이타 타입
	char name[30];   // 구조체 멤버
	int age;
	int stNo;

	struct tagStudent* Next;
} Student;


int main() {
	Student st1 = { "monster1", 19, 1234, NULL };
	Student st2 = { "monster2", 20, 1235, NULL };
	Student st3 = { "monster3", 22, 1236, NULL };
	Student st4 = { "monster4", 18, 1237, NULL };

	st1.Next = &st2;
	st2.Next = &st3;
	st3.Next = &st4;

	// 구조체변수의 주소값으로 구조체 멤버에 접근할때는 ->(화살표 연산자)를
	// 사용합니다.
	(&st1)->age;

	printf("이름: %s\n", st1.Next->Next->Next->name);
	printf("나이: %d\n", st1.Next->Next->Next->age);
	printf("학번: %d\n", st1.Next->Next->Next->stNo);


	return 0;
}
