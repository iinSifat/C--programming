#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    int sum = 0;
    int count = 0;
    printf("The first %d prime numbers are:\n", N);
    for (int i = 2; count < N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    printf("\n The sum of the first %d prime numbers is: %d\n", N, sum);

    return 0;
}