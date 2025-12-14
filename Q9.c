#include <stdio.h>

int main() {
    int n, i, pos = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        if (arr[i] == 99) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("First occurrence of 99 is at index %d\n", pos);
    else
        printf("99 not found in the array\n");

    return 0;
}
