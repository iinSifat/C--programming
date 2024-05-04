#include <stdio.h>
int main()
{
    int arr[5] = {4, 3, 2, 5, 1};
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (*(ptr + i) > *(ptr + j))
            {
                int tmp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", *ptr);
        ptr++;
    }
}
// #include<stdio.h>
// int main(){
//     printf("Hello world")
// }