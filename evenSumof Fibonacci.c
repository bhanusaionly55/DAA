#include <stdio.h>

int main() {
    int my_input;
    printf("enter the number : ");
    scanf("%d",&my_input);
    int fibonacci[2 * my_input + 1];
    int j, sum = 0;
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (j = 2; j <= 2 * my_input; j++) {
        fibonacci[j] = fibonacci[j - 1] + fibonacci[j - 2];
        if (j % 2 == 0)
            sum += fibonacci[j];
    }
    printf("The even sum of Fibonacci series till number %d is : %d\n", my_input, sum); 
    return 0;
}

