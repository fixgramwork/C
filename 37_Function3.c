#include <stdio.h>
// 일반적으로 함수는 값을 하나만 리턴할 수 있습니다.

// 값을 여러개 리턴을 해야 할때
// 구조체 사용

struct Ret {   // 사용자 정의 DataType
	int addValue;
	int subValue;
	int mulValue;
	float divValue;
};

struct Ret AllCalulate(int a, int b) {
	struct Ret ret;

	ret.addValue = a + b;
	ret.subValue = a - b;
	ret.mulValue = a * b;
	ret.divValue = a / (float)b;

	return ret;
}

// 포인터사용
void pAllCalculate(int a, int b, int* paddValue, int* psubValue, int* pmulValue, float* pdivValue) {
	*paddValue = a + b;
	*psubValue = a - b;
	*pmulValue = a * b;
	*pdivValue = a / (float)b;
}

int main() {
	int a = 20;
	int b = 30;

	 
	printf("구조체사용\n");
	// 구조체 사용
	struct Ret ret = AllCalulate(a, b);

	printf("%d + %d = %d\n", a, b, ret.addValue);
	printf("%d - %d = %d\n", a, b, ret.subValue);
	printf("%d x %d = %d\n", a, b, ret.mulValue);
	printf("%d / %d = %f\n", a, b, ret.divValue);


	printf("\n포인터 사용\n");
	// 포인터사용
	int addValue;
	int subValue;
	int mulValue;
	float divValue;

	pAllCalculate(a, b, &addValue, &subValue, &mulValue, &divValue);

	printf("%d + %d = %d\n", a, b, addValue);
	printf("%d - %d = %d\n", a, b, subValue);
	printf("%d x %d = %d\n", a, b, mulValue);
	printf("%d / %d = %f\n", a, b, divValue);







	return 0;
}
