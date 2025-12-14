#include <stdio.h>

int main() {
    int a, b, borrow;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    printf("Result is %d\n", a);
    return 0;
}
