#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, count = 0;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
