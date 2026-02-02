#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120};
    int* ptr = arr;

    printf("Position one: %d\n", *ptr);

    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        printf("%p\n", ptr);
        ptr++;
    }
}