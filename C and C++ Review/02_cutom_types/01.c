// size_t = size type for memory allocation 
// size_t is an unsigned integer data type used to represent the size of objects in bytes.
// It is guaranteed to be big enough to contain the size of the biggest object the host system can handle.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {12, 24, 36, 48, 60};

    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of arr: %zu\n", size);
    printf("Size of size_t: %zu\n", sizeof(size_t));
    printf("int size in bytes: %zu\n", sizeof(int));
    return 0;
}