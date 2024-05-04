#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{

    int mark[] = {9, 2, 3, 4, 1, 5};

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", mark[i]);
    }
    printf("\n");
    for (int j = 0; j < SIZE; j++)
    {
        for (int i = 0; i < SIZE - 1; i++)
        {
            if (mark[i] < mark[i + 1])
            {
                int temp = mark[i];
                mark[i] = mark[i + 1];
                mark[i + 1] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", mark[i]);
    }

    return 0;
}
