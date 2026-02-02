#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x;

    printf("The Address of x: %p\n", ptr);
    printf("The value of x: %d\n", *ptr);

    return 0;
}