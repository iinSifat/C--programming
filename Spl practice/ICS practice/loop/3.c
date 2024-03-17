#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int sum = 0;
    int sign = 1;
    int term = 2;

    for (int i = 1; i <= n; i++) {
        sum = sum + sign * term * (term + 1)*(term+1);
        term = term + 2;
        sign = sign * (-1);
    }

    printf("Sum of the series up to the %d terms: %d\n", n, sum);

    return 0;
}

