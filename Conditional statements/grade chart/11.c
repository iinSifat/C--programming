#include<stdio.h>
int main ()
{
                 int number;
            printf("Enter the number:");
            scanf("%d",&number);

            if(number>=90 && number<=100)
            {
                            printf("Grade:A");
            }
            else if(number>=86 && number<=89)
            {
                            printf("Grade:A-");
            }
            else if (number>=82&& number<=85)
            {
                            printf("Grade:B+");
            }
            else if (number>=78&& number<=81)
            {
                            printf("Grade:B");
            }
            else if(number>=74 && number<=77)
            {
                            printf("Grade:B-");
            }
            else if(number>=70 && number<=73)
            {
                            printf("Grade:C+");
            }
            else if(number>=66&&number<=69)
            {
                            printf("Grade:C");
            }
            else if(number>=62&& number<=65)
            {
                            printf("Grade:C-");
            }
            else if(number>=58&&number<=61)
            {
                            printf("Grade:D+");
            }
            else if(number>=55&& number<=57)
            {
                            printf("Grade:D");
            }
            else if(number<55)
            {
                            printf("Grade:F");
            }
            else
            {
                            printf("Invalid input");

            }


            return 0;
}
