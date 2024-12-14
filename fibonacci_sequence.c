#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    // Prompt the user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle non-positive integers
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Print the Fibonacci sequence
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", t1);

        nextTerm = t1 + t2;  // Calculate the next term in the series
        t1 = t2;  // Update t1 to t2
        t2 = nextTerm;  // Update t2 to the next term
    }

    printf("\n");
    return 0;
}
