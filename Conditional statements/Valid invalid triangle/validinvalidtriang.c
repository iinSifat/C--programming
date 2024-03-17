#include<stdio.h>
int main ()
{
         int ang1,ang2,ang3;

            printf("Three angles of the triangle are: ");
            scanf("%d %d %d ",&ang1,&ang2,&ang3);
            if (ang1>0 && ang2>0 && ang3>0 && ang1+ang2+ang3==180)
            {
                        printf("The triangle is valid");
            }
            else{
                        printf("The triangle is invalid");
            }

            return 0;
}
