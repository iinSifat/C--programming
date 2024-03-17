#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

   switch(ch)
    {
    case    ((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z')) :

            printf("This is a Alphabet.");
        break;

    }




    return 0;

}
