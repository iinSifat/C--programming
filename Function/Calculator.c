#include <stdio.h>
int sum(int a, int b);
int def(int a, int b);          //Functions declarations
int multipli(int a, int b);
int division(int a, int b);     

int main()
{
    printf(".........Calculator with fuction........\n");
    char choice;
    int num1, num2;
    printf("Enter the first number:");//Taking inputes
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter your choice:\n");
    printf("+ for summation\n");
    printf("- for Subtraction\n");
    printf("* for multiplication\n");
    printf("/ for division\n");

    printf("Your choice is:");
    scanf(" %c", &choice);

    if (choice == '+')                  //Functions calling
        printf("Sum of the numbers is: %d", sum(num1, num2));
    if (choice == '-')
        printf("Subtraction of the numbers is: %d", def(num1, num2));
    if (choice == '*')
        printf("Multiplication of the numbers is: %d", multipli(num1, num2));
    if (choice == '/')
        printf("Division of the numbers is: %d", division(num1, num2));

    return 0;
}
int sum(int a, int b)//argument passing and process
{
    return a + b;
}
int def(int a, int b)
{
    return a - b;
}
int multipli(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}