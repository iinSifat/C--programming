#include<stdio.h>
int IsPrime(int N)
{
    int prime=1;
    if(N<=0)
    return 0;
    if(N>0){
        for(int i=2;i<N;i++){
            if(N%i==0)
           return 0;
        }
        return 1;
    }
   
    return 1;
}
//Prime in a given range 
int GeneratePrime(int N){
    printf("Prime less than N:");
    for(int i=2;i<N;i++){
        IsPrime(i);
        if(IsPrime(i)==1)
        printf("%d ",i);
    }
}
//Solution of no.20
int GenNthprime(int N){
    int count=0;
    printf("Prime numbers till nth term:");
    for(int i=2;count<N;i++){
          IsPrime(i);
        if(IsPrime(i)==1)
        {
        printf("%d ",i);
         count++;
         }

   
    }
}

int main(){
    int N;
    printf("Enter the number N:");
    scanf("%d",&N);
    IsPrime(N);
    
    if(IsPrime(N)==1)
    printf("Prime");
    else
    printf("Not prime");
    puts("");
    GeneratePrime(N);
    puts("");
    GenNthprime(N);
   
}