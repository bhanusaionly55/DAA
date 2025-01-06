#include <stdio.h>

int main() {
    int m1, n1, m2, n2;

    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &m1, &n1);

    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &m2, &n2);

    // Check if the matrices can be multiplied
    if (n1 != m2) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }

    // Calculate the time complexity
    int timeComplexity = m1 * n1 * n2;

    printf("The time complexity of multiplying the two matrices is O(%d).\n", timeComplexity);

    return 0;
}

