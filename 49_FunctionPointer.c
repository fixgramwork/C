#include <stdio.h>

// 함수 포인터

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int main() {
	int a = 20;
	int b = 30;

	printf("&add = %p\n", &add);
	printf("&sub = %p\n", sub);
	printf("$mul = %p\n", mul);

	// 함수포인터 : 함수가 위치하고 있는 곳에 주소값

	int(*pfunc)(int, int); // 함수 포인터 변수

	pfunc = add;

	printf("%d + %d = %d\n", a, b, pfunc(a, b));

	pfunc = sub;

	printf("%d + %d = %d\n", a, b, pfunc(a, b));

	pfunc = &mul;

	printf("%d x %d = %d\n", a, b, pfunc(a, b));



	return 0;
}
