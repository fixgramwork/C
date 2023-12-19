#include <stdio.h>

// 논리연산자
// 논리값을 연산할때 사용합니다. 논리값(true(참), false(거짓))
// &&(논리And) 그리고, || (논리 Or) 또는 혹은, !(논리 not)

int main() {
	int TRUE = 1;
	int FALSE = 0;

	// && (논리 And)
	// 논리 And연산자는 FALSE 확률이 높은 것을 앞쪽에 배치하는 것이
	// 유리합니다.
	printf("논리 And\n");
	int ret = TRUE && TRUE;
	printf("TRUE && TRUE = %d\n", ret);

	ret = TRUE && FALSE;
	printf("TRUE && FALSE = %d\n", ret);

	ret = FALSE && TRUE;
	printf("FALSE && TRUE = %d\n", ret);

	ret = FALSE && FALSE;
	printf("FALSE && FALSE = %d\n", ret);

	// || (논리 Or)
	// 논리 OR연산자는 TRUE 확률 높은 것을 앞쪽에 배치하는 것이 유리합니다.
	printf("\n\n논리 OR\n");
	ret = TRUE || TRUE;
	printf("TRUE || TRUE = %d\n", ret);

	ret = TRUE || FALSE;
	printf("TRUE || FALSE = %d\n", ret);

	ret = FALSE || TRUE;
	printf("FALSE || TRUE = %d\n", ret);

	ret = FALSE || FALSE;
	printf("FALSE || FALSE = %d\n", ret);

	// !(논리 not)
	// 논리를 부정할때 사용
	printf("\n\n논리 Not\n");
	ret = !TRUE;
	printf("!TRUE = %d\n", ret);

	ret = !FALSE;
	printf("!FALSE = %d\n", ret);

	return 0;
}
