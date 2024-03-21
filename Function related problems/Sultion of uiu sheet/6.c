#include<stdio.h>
int Calculatesum(int n){
    int sum=0,num;

     for(int i=1;i<=n;i++){
        scanf("%d",&num);
      
         sum+=num;   
    }
   return sum;
}

   

int main(){
    int n,sum=0;
    printf("Input:");
    scanf("%d",&n);
    printf("Sum of nth digit numbers is:%d",Calculatesum(n));

}
