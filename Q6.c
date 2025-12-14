#include <stdio.h>

int main() {
    int choice;
    int decimal = 0, binary, base = 1, rem;
    long long binResult = 0;

    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &binary);

        while (binary != 0) {
            rem = binary % 10;
            decimal += rem * base;
            base *= 2;
            binary /= 10;
        }

        printf("Decimal value is %d\n", decimal);
    }
    else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);

        while (decimal != 0) {
            rem = decimal % 2;
            binResult = binResult * 10 + rem;
            decimal /= 2;
        }

        printf("Binary value is %lld\n", binResult);
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

