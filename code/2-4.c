#include <stdio.h>

long my_strtol(char* str, char** endptr) {
    long res = 0;

    while (*str >= '0' && *str <= '9') {
        // 블라블라
        res = res * 10 + (*str - '0');
        str++;
    }

    // 나머지 문자열을 endptr에 저장
    *endptr = str;

    return res;
}

int main() {
    char str[] = "2026hello";
    char* end;

    long val = my_strtol(str, &end);

    printf("%ld %s", val, end);
    return 0;
}