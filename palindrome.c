#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str),i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%s", inputString);

    if (isPalindrome(inputString)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

