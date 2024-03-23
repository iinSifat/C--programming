#include<stdio.h>
int input_arr(int arr[],int n)
{
    printf("===Enter the elements of the array===\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    int arr[50];
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    input_arr(arr,size);
    int src_num,rplc_num;
    printf("Enter the number to search for:");
    scanf("%d",&src_num);
    int flag=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==src_num)
        {
            flag=1;
        }
        if(arr[i]!=src_num)
            flag=0;
    }
    if(flag==1)
    {
        printf("Enter  the number to replace with:");
        scanf("%d",&rplc_num);
        printf("Indexes that matched:");
        for(int i=0; i<size; i++)
        {
            if(arr[i]==src_num){
            printf("%d ",i);
                arr[i]=rplc_num;}
        }

    puts("");
        printf("Modified array:");
        for(int i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }

    }
    else if(flag==0)
        printf("Not in the array");


}
