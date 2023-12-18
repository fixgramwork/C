#include <stdio.h>
#include <string.h>

// 문자열
// C언어에서는 문자열을 문자배열을 가지고 구현합니다.
// C언어를 만들 당시에 문자열함수를 만드는데 

// 문자배열 출력함수
void PrintStringArray(char* str, int size) {
    for (int i = 0; i < size; i++) {
        putchar(str[i]);
    }

    printf("\n");
}

void PrintString(char* str) {
    while (*str) {
        putchar(*str);
        str++;
    }

    printf("\n");
}


int main() {
    char str[] = { 'M', 'O', 'N' }; // \0이 없으므로 분자 배열
    char str2[] = "MON";   // 문자열
    char str3[] = { 'M', 'O', 'N', '\0' }; //\0이 있으므로 문자열

    printf("str size = %d\n", sizeof(str));
    printf("str2 size = %d\n", sizeof(str2));
    printf("str3 size = %d\n", sizeof(str3));

    printf("PrintStringArray\n");
    PrintStringArray(str, sizeof(str));
    PrintStringArray(str2, sizeof(str2));
    PrintStringArray(str3, sizeof(str3));

    printf("\n\nPrintString\n");
    PrintString(str);
    PrintString(str2);
    PrintString(str3);


        return 0;
}
