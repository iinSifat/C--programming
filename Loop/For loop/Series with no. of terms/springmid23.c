#include<stdio.h>

int main() {
    int n, count = 1;
    float sum = 0;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    for (int i = 1, j = 1; count <= n; i++, j += 2, count++) {
        if (i % 2 == 0)
            sum -= 1.0 / j;
        else
            sum += 1.0 / j;
    }
    
    printf("Sum = %f", sum);
    return 0;
}
