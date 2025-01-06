#include <stdio.h>

void generateSubsets(int arr[], int subset[], int n, int index) {
	int i;
    if (index == n) {
        printf("{ ");
        for ( i = 0; i < n; i++) {
            if (subset[i])
                printf("%d ", arr[i]);
        }
        printf("}\n");
        return;
    }

    subset[index] = 0;
    generateSubsets(arr, subset, n, index + 1);

    subset[index] = 1;
    generateSubsets(arr, subset, n, index + 1);
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int subset[n];
    generateSubsets(arr, subset, n, 0);

    return 0;
}

