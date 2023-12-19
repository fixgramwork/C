#include <stdio.h>

int strlen2(char* str) {
	int count = 0;
	while (*str++) count++;
	return count;
}

char* strcpy2(char* dest, char* src) {
	char* originPtr = dest;

	while (*src) *dest++ = *src++;
	*dest = '\0';

	return originPtr;
}

char* strcat2(char* str1, char* str2) {
	char* originPtr = str1;

	while (*str1) str1++;
	while (*str2) *str1++ = *str2++;
	*str1 = '\0';

	return originPtr;
}

int main() {
	char str[] = "monster";
	char str2[] = " is World!!";
	char str3[40];
	char str4[] = "monster is World!!";

	// 1. strlen 문자열의 문자갯수 세는 함수
	int count = strlen2(str);
	printf("str: %s의 문자의 갯수는: %d\n", str, count);

	// 2. strcpy 문자열을 복사하는 함수
	strcpy2(str3, str);
	printf("str3: %s\n", str3);

	// 3. strcat 문자열 병합하는 함수
	strcat2(str3, str2);
	printf("str3: %s\n", str3);

	return 0;
}
