#include<stdio.h>
int EvenArrDet(int arr[],int n){//14.c even numbers in array
for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        printf("%d ",arr[i]);
    }
}}
int minArr(int arr[],int n)//15.c minimum in array
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}
int Multiple2(int arr[],int n){//16.c multiple by 2
    printf("Array multiply by 2:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]*2);
    }

}
int ReverseArr(int arr[],int n){//8.c reverse array
    int temp;
    printf("Reverse array:");
    for(int i=0,j=n-1;i<n,j>0;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    

}

int main(){

    int arr[90];
    int size;
    printf("Enter the size:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {

        scanf("%d",&arr[i]);
    }
    EvenArrDet(arr,size);
    puts("");
    printf("Minimum array is %d",minArr(arr,size));
    puts("");
    Multiple2(arr,size);
    puts("");
    ReverseArr(arr,size);

}
