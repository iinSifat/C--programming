#include <stdio.h>

int main() {
  int x;
  printf("Enter the number:");
  scanf("%d",&x);

  int check=x%2;

  switch (check)//switch only works while working with integer and character only
  {
              case 0:
              printf("The number is even");
              break;

              case 1://Use :
              printf("The number is odd");
              break;


              return 0;
  }




}


