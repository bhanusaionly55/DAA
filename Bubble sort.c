#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], m, i;
    printf("Enter the number of elements: ");
    scanf("%d", &m);
    printf("Enter the elements: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, m);

    printf("Sorted array: ");
    for (i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

