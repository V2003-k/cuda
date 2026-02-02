#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = NULL;
    printf("1. Initial pointer value: %p\n", (void*)ptr);

    if (ptr == NULL) {
        printf("2. Pointer is NULL can not dereference\n");
    }

    ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("3. Memory Allocation Failed\n");
        return 1;
    }
}