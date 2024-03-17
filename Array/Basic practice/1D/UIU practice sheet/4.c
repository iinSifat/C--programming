//avarage of the numbers
#include<stdio.h>
int main()
{
    int n;
   
    printf("enter the value for n:");
    scanf("%d",&n);
    float sum=0.0, A [n];
    for(int i=0;i<n;i++)
    {
        scanf("%f",&A[i]);

    }
     for(int i=0;i<n;i++)
    {
       sum+=A[i];

    }
    printf("\n Avrage of the numbers:%.2f",(sum/n));
    
return 0;
}    


