//sum,sum of the even numbers,sum of the odd nubers
#include<stdio.h>
int main()
{
    int n,sum=0,sum2=0,sum3=0;
   
    printf("enter the value for n:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    
    }
      for(int i=0;i<n;i++)
    {
     sum+=A[i];
     if(A[i]%2==0)
     sum2+=A[i];
     else
     sum3+=A[i];
    
    }
    printf("\n Sum:%d",sum);
    printf("\nSum of the even numbers:%d",sum2);
    printf("\nSum of the even numbers:%d",sum3);
    



    return 0;
}