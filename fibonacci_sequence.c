#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", t1);

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}