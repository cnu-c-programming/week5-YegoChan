#include <stdio.h>

void read_only(const int* arr, int size) {
    // arr == nums = &arr[0]

    // arr[0] = 999;
    // 주석을 제거하면 컴파일 에러

    for (int i = 0; i < size; i++) {
        printf("%d\n", *(arr + i));
    }
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    read_only(nums, 5);
    return 0;
}