#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    scanf("%d", &index);

    int* p = arr;
    if (index < size && 0 <= index) {
        printf("%d", *(p + index));
    } else {
        printf("Error!");
    }

    return 0;
}