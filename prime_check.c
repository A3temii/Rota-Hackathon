#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases for numbers less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors from 2 to num/2
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Set isPrime to false if a divisor is found
            break;
        }
    }

    // Output the result based on the prime check
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
