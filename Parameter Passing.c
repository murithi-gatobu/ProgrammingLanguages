#include <stdio.h>
#include <stdlib.h>

//Pass by value

void doubleValue(int num);

int main() {
    int x = 5;
    printf("Before doubleValue: x = %d\n", x);
    doubleValue(x);
    printf("After doubleValue: x = %d\n", x); // x remains unchanged
    return 0;
}


void doubleValue(int num) {
    num = num * 2; // This change does not affect the original variable
}

//Pass by reference

void swapByReference(int *a, int *b);

int main() {
    int x = 10, y = 20;
    printf("Before swapByReference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapByReference: x = %d, y = %d\n", x, y); // x and y are swapped
    return 0;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
