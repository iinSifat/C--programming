#include <stdio.h>
#include<math.h>
int main (){
    int n;
    float result=0.0,sum=0.0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The series is:");
    for (int i=0;i<n;i++){


        result=result+1/pow(2,i);
      
        printf("%f ",result);
      
        
    }
    
   /* printf("The sum till nth terem:");
   float sum=0.0;
   for(int j=1;j<=n;j++){
   
   }*/



    return 0;
}