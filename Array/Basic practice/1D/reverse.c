#include<stdio.h>
int main()
{
    int n,indmax,indmin;
    
    printf("Enter the value of n:");
    scanf("%d",&n);
    int  A[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %d",&A[i]);
    }
    int max=A[0],min=A[0];
    for(int i=0;i<n;i++){
        if(A[i]>=max){
            max=A[i];
            indmax=i;
        }
    
    }
    printf("Maximum is %d at index %d",max,indmax);
    for(int i=0;i<n;i++){
        if(A[i]<min){
            min=A[i];
            indmin=i;
        }
    }
    printf("\nMinimum is %d at index %d",min,indmin);
    

    return 0;
}
   
   
   
   
   
    /*for(int i=0,j=n-1;i<j;i++,j--){
        int temp=A[i];
        A[i]=A[j];
        A[j]=temp;

    }*
     for(int i=0;i<n;i++)
    printf("Reverse is: %d",A[i]);

}
//max,min,position

   
    int max=A[0],min=A[0];*/