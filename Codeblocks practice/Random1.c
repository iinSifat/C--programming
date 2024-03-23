#include<stdio.h>
int main()
{
    int arr[90],n,sum=0;
    printf("Input n:");
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<n;i++){


        arr[i]=arr[i-1]+arr[i-2];



    }
     for(int i=0;i<n;i++){
            sum+=arr[i];
     }

    printf("Sum=%d",sum);
    puts("");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

    }
