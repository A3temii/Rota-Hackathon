#include <stdio.h>

int main() {
    int num, sum = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert negative numbers to positive
    if (num < 0) {
        num = -num;
    }

    // Calculate the sum of the digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to the sum
        num /= 10;  // Remove the last digit
    }

    // Output the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
