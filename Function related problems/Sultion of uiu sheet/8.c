#include<stdio.h>
int ReverseArr(int Arr[],int n)
{
   
    printf("The reverse array is:\n");
    for ( int i=n-1;i>=0; i--)
    {
        printf("%d ",Arr[i]);
    
    }
    
}
int Array(int Arr[],int s){
   
    printf("The array is:\n");
    for(int i=0;i<s;i++){
        scanf("%d",&Arr[i]);
    }
}
int main(){
    int arr[50],size;
    printf("Enter the size:");
    scanf("%d",&size);
    Array(arr,size);
    ReverseArr(arr,size);
    return 0;

}