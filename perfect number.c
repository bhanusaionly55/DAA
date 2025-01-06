#include <stdio.h>
int main() {
    int start, end,num,i;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) {
        int sum = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num)
                    sum += num / i;
            }
        }
        if (sum == num && num != 1) {
            printf("%d\n", num);
        }
    }
    return 0;
}
