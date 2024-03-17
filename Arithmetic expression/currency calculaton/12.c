#include <stdio.h>
int main ()
{
            int total_amount,one,five,ten,fifty,hundred,fivehundred;
            printf("Enter the total amount of currency:");
            scanf("%d",&total_amount);

            fivehundred= total_amount/500;
            hundred =(total_amount%500)/100;
            fifty =((total_amount%500)%100)/50;
            ten=(((total_amount%500)%100)%50)/10;
            five=((((total_amount%500)%100)%50)%10)/5;
            one=((((total_amount%500)%100)%50)%10)%5;


            printf("%d %d %d %d %d %d",fivehundred,hundred,fifty,ten,five,one);



            return 0;
}
