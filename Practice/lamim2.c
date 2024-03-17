#include<stdio.h>

int main()
{
    int lower_limit, upper_limit, h = 0, i;
    printf("Enter range of the number: ");
    scanf("%d %d", &lower_limit, &upper_limit);


    for (i = lower_limit; i <= upper_limit; i++)
    {

        int i1 = i;
        long int i2 = 0;
        int ji = 1;
        while (i1 > 0)
        {
            int y1 = i1 % 10;
            for (int hy = 1; hy <= y1; hy++)
            {
                ji *= hy;
            }
            i2 += ji;
            ji = 1;
            i1 = i1 / 10;
        }
        if (i2 == i)
        {
            h++;
            printf("%d ", i);
        }
    }

    if (h == 0)
    {
        printf("No strong numbers");
    }
    return 0;
}

