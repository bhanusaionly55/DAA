#include <stdio.h>
int i;
int search(int array[], int n, int x) {
    for (i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
int main() {
    int array[100];
    int n, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d", &x);

    int result = search(array, n, x);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", result);

    return 0;
}

