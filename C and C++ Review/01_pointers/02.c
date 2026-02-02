#include <stdio.h>

int main() {
    int x = 10;
    
    int* ptr1 = &x;
    int** ptr2 = &ptr1;
    int*** ptr3 = &ptr2;

    printf("The value of ptr3: %d\n", ***ptr3);
    return 0;
}