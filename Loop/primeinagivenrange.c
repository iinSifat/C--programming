#include<stdio.h>
int main()
{
   int max,min,prime=1,num,i,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&min,&max);


    if(min>max)
        {temp=min;
        min=max;
        max=temp;}

    for(num=min;num<=max;num++)

       { prime=1;
               if (num<=1)
               {
                       prime=0;
               }
               else
               {
                       for(i=2;i<num;i++)
                       {
                               if (num%i== 0)
                                {prime=0;
                               break;}
                       }
               }
               if(prime==1)
                printf("%d ",num);

       }



    return 0;
}


