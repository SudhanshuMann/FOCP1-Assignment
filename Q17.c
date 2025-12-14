#include <stdio.h>

int main() {
    int n, i, choice, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array before deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nChoose position to delete:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d", &choice);

    if (choice == 1)
        pos = 0;
    else if (choice == 2)
        pos = (n - 1) / 2;
    else
        pos = n - 1;

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
