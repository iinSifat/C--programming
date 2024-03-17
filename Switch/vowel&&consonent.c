//Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:\n");
    scanf("%c",&alphabet);
    switch(alphabet)
    {


    case 'a':
        printf("This is a Vowel");
        break;
    case 'e':
        printf("This is a Vowel");
        break;
    case 'i':
        printf("This is a Vowel");
        break;
    case 'o':
        printf("This is a Vowel");
        break;
    case 'u':
        printf("This is a Vowel");
        break;
    case 'A':
        printf("This is a Vowel");
        break;
    case 'E':
        printf("This is a Vowel");
        break;
    case 'I':
        printf("This is a Vowel");
        break;
    case 'O':
        printf("This is a Vowel");
        break;
    case 'U':
        printf("This is a Vowel");
        break;
    default:
        printf("Consonenet");
    }


    return 0;
}
