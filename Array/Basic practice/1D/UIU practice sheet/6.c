# include<stdio.h>
int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    int A[n],B[n],C[n];
    printf("\nEnter the value for Array A:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
      
    }

    printf("\nEnter the value for Array B:");
             for(int i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
      
    }
      printf("Values of the THIRD array:");
      for(int i=0;i<n;i++)
    {
        C[i]=A[i]+B[i];
        printf("%d\t",C[i]);
      
    }


    return 0;
}