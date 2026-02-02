#include <stdio.h>

int main() {
    int num = 42;
    float fnum = 3.14;

    void* vptr;

    vptr = &num;
    printf("Value: %d\n", *(int*)vptr);

    vptr = &fnum;
    printf("Value: %.2f\n", *(float*)vptr);
    return 0;
}