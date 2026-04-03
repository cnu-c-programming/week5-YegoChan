#include <stdio.h>

void print_reverse(int* arr, int size) {
    int* start = arr;
    int* end = arr;

    for (int i = 1; i < size; i++) {
        start++;
    }

    do {
        printf("%d ", *start);
        start--;
    } while (start != end);

    printf("%d", *end);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}