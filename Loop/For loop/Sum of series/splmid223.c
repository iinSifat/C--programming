#include<stdio.h>
int main ()
{
 int number,count=1,sum=0,sum2=0;
 printf("Enter the term:");
 scanf("%d",&number);
 for(int i=5;count<number;i=i+8)
 {
     sum=sum+i;
     sum2=sum2+sum;
     
     count++;
   
     
 }
  printf("%d ",sum2);


    return 0;
}