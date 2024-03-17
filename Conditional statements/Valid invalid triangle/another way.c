#include<stdio.h>
int main ()
{
            double ang1,ang2,ang3;
            printf("Enter the three tiangles:");
            scanf("%lf %lf %lf",&ang1,&ang2,&ang3);

            if (ang1>0 && ang2>0 && ang3>0 && ang1+ang2+ang3==180)
            {
                        printf ("Valid");

            }
            else
            {
                        printf("invalid");
            }

            return 0;
}
