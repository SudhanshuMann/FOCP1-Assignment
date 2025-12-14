#include <stdio.h>

int main() {
    int n, i, choice, value, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array before insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nChoose position to insert:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &choice);

    if (choice == 1)
        pos = 0;
    else if (choice == 2)
        pos = n / 2;
    else
        pos = n;

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
