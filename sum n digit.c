#include <stdio.h>
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int maxSumOfDigits(int nums[], int numsSize) {
    int maxSum = -1,i,j;

    for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize; j++) {
            if (i != j && sumOfDigits(nums[i]) == sumOfDigits(nums[j])) {
                int sum = nums[i] + nums[j];
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
    }
    return maxSum;
}
int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    int nums[numsSize],i;
    printf("Enter %d positive integers:\n", numsSize);
    for (i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    int maxSum = maxSumOfDigits(nums, numsSize);
    printf("Maximum value of nums[i] + nums[j]: %d\n", maxSum);
    return 0;
}
