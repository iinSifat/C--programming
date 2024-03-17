//Program that will take an integer of length one from the terminal and then display the digit in English
#include <stdio.h>

int main() {
  int x;
  printf("Enter the number:");
  scanf("%d",&x);

  switch(x)
  {
  case 0:
  printf("Zero");
  break;

  case 1:
  printf("one");
  break;

  case 2:
  printf("Two");
  break;

  case 3:
  printf("Three");
  break;

  case 4:
  printf("Four");
  break;

  case 5:
  printf("5");
  break;

  case 6:
  printf("six");
  break;


 case 7:
  printf("seven");
  break;

  case 8:
  printf("eight");
  break;

  case 9:
  printf("nine");
  break;

  default:
            printf("\nInvalid");
            break;
  }

  return 0;

}
