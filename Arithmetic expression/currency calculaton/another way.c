#include<stdio.h>
int main ()
{
            int totalamount,note500,note100,note50,note10,note5,note1;
            printf("Enter the total amount of currency:");
            scanf("%d",&totalamount);

            note500=totalamount/500;
            totalamount%=500;

             note100=totalamount/100;
            totalamount%=100;

             note50=totalamount/50;
            totalamount%=50;

             note10=totalamount/10;
            totalamount%=10;

             note5=totalamount/5;
            totalamount%=5;

             note1=totalamount%5;

             printf("%d %d %d %d %d %d",note500,note100,note50,note10,note5,note1);







            return 0;
}
