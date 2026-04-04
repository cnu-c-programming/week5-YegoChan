#include <stdio.h>

int main() {
    int x = 10, y = 20;

    printf("%d\n", x);

    // 블라블라
    int* const ptr = &x;

    *ptr = y;

    printf("%d\n", x);

    return 0;
}