#include<stdio.h>
int main()
{
    int n,count=0;
    
    printf("Enter the value of n:");
    scanf("%d",&n);
    char A[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')        
        {
            count++;
        }
      
    }
      printf("Count: %d ",count);
    
    



    return 0;
}