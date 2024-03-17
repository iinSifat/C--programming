#include<stdio.h>
int main()
{
    int A[100];
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&A[i]);

    }
      for (int i = 0; i < n; ++i)
    {
      printf("%d",&A[i]);

    }


    return 0;


}