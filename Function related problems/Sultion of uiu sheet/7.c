#include<stdio.h>
int ArrSum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[50],n;
    printf("Input");
    scanf("%d",&n);
      for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("Sum :%d",ArrSum(arr,n));


}