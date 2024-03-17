#include<stdio.h>
int main ()
{
                int roll,num1,num2,num3,num4,sum;
                float avg;
                printf("enter the roll no:");
                scanf("%d",&roll);
                printf("enter 4 numbers:");
                scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
                if(roll%2!=0)
                {
                                avg=(num1+num2+num3+num4)/4;
                                printf("The average of the four numbers is:%f ",avg);

                                if(avg<10)
                                {


                                if (num1<num2&&num1<num3&&num1<num4)
                                {
                                                printf("Number1 is the minimum number");
                                }
                                else if (num2<num1&&num2<num3&&num2<num4)
                                {
                                                printf("Number2 is the minimum number");
                                }
                                else if(num3<num1&&num3<num2&&num3<num4)
                                {
                                                printf("Number3 is the minimum number");
                                }
                                else{
                                                printf("Number4 is the minimum number");
                                }

                                }
                                else {
                                                printf("Messi is the goat");
                                }

                }




                return 0;
}
