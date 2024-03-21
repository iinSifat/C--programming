#include<stdio.h>
int Finddistance(int s,int t){
    int sum=s*t;
    return sum;
}
int inputArr(int Arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&Arr[i]);
    }
}
int Displayarr(int Arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",Arr[i]);
    }
}
int Arrmin(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min)
        min=arr[i];
       
    }

return min;

}

int main(){
    int Speed[50],Time[50];
    int n;
    scanf("%d",&n);
    printf("Speed:\n");
    inputArr(Speed,n);
    Displayarr(Speed,n);
    puts("");//Line break
    printf("Time:\n");
    inputArr(Time,n);
    Displayarr(Time,n);
    puts("");
    

    int Distance[50];
    for(int i=0;i<n;i++){
        Distance[i]=Finddistance(Speed[i],Time[i]);
    }
    printf("Distance:\n");
    Displayarr(Distance,n);
    puts("");
    printf("Minimum distance is %d",Arrmin(Distance,n));

   //Finddistance(Speed[i],Time[i]);


}