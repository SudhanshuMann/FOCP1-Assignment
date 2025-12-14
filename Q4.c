#include <stdio.h>

void swapUsingTemp(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Temp variable swap: a=%d b=%d\n", a, b);
}

void swapUsingArithmetic(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Arithmetic swap: a=%d b=%d\n", a, b);
}

void swapUsingXOR(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("XOR swap: a=%d b=%d\n", a, b);
}

void swapUsingPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swapUsingTemp(x, y);
    swapUsingArithmetic(x, y);
    swapUsingXOR(x, y);

    swapUsingPointers(&x, &y);
    printf("Pointer swap: x=%d y=%d\n", x, y);

    return 0;
}
