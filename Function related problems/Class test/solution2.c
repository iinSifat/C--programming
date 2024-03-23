#include<stdio.h>
int findDistance(int s, int t){
    return s*t;

}
int InputArr(int Arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&Arr[i]);
    }
}
int PrintArr(int Arr[],int n){
    
    for(int i=0;i<n;i++){
        printf("%d ",Arr[i]);
    }
}
int minArr(int Arr[],int n){
   
    int min=Arr[0];
    for(int i=1;i<n;i++){
       if(Arr[i]<min) min=Arr[i];
    }
    return min;
}

int main(){
    int n;
    scanf("%d",&n);
    int speed[70];
    int time[70];
    printf("Speed:\n");
    InputArr(speed,n);
    printf("Time:\n");
    InputArr(time,n);
    int Distance[50];
  
    for(int i=0;i<n;i++){
        Distance[i]=findDistance(speed[i],time[i]);
    }
PrintArr(Distance,n);
puts("");

printf("Minimum distance is %d",minArr(Distance,n));

}