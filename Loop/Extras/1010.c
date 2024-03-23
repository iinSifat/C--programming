#include<stdio.h>
int main ()
{
    int  N;
    scanf("%d",&N);

    int prime=0;
    if(N<=0)
    prime=0;
    if(N>0){
        for(int i=2;i<N;i++){
            if(N%i==0)
            prime=0;
            break;
           
        }
        
    }
    if(prime==0)
    printf("Prime");
    else
    printf("Not prime");

    return 0;
}
