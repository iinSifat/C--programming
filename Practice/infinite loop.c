#include <stdio.h>

int main() {
    int X, n;

    printf("Enter the value of X: ");
    scanf("%d", &X);

    n = X;
    if (X % 2 == 0) {
        X = X + 1;
    }

    printf("Consecutive odd numbers from %d:\n", n);
    for (int i = 0; i <n; i++) {
        printf("%d ", X + 2 * i);
    }

    printf("\n");

    return 0;
}

