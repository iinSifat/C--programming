/*5.
Program that will read from the console a random positive nonzero number
and determine if it is a power of 2.*/
#include <stdio.h>0

int main() {
     int number;

    printf("Enter a positive nonzero number: ");
    scanf("%u", &number);

    if (number > 0 && (number & (number - 1)) == 0) {
        printf("The number is a power of 2.\n");
    } else {
        printf("The number is not a power of 2.\n");
    }

    return 0;
}

