/*Write a C program which will take as input a time interval in seconds,
and represent it in hour-minute-second format.*/
#include <stdio.h>
int main ()
{
      int sec,min,hr,hr_min_sec;
      printf("Enter the value in seconds:");
      scanf("%d",&sec);

      hr=sec/3600;
      min=(sec%3600)/60;
      hr_min_sec=(sec%3600)%60;
      printf("%d hour %d minutes %d seconds",hr,min,hr_min_sec);


      return 0;
}
