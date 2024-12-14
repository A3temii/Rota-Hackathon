#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Calculate sum of digits
    while (num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
