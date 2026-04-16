#include <stdio.h>

int main() {
    int val = 7;
    int other = 77;

    int* const p = &val;
    
    printf("%d\n", *p);
    // 7을 출력하고 싶다고?
    return 0;
}
