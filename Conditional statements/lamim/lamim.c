/*Write a C program that will take 3 integer numbers as input and
 find the maximum value of them after exactly one addition and one multiplication*/
 #include <stdio.h>
int  main ()
{
                int num1,num2,num3,result1,result2,result3;
                printf("Enter three numbers:");
                scanf("%d %d %d",&num1,&num2,&num3);

                result1=num1*num2+num3;
                result2=num1*num3+num2;
                result3=num2*num3+num1;

                if (result1>result2&&result1>result3)
                {
                                printf("%d",result1);
                }
                else if (result2>result3&&result2>result1)
                {
                                 printf("%d",result2);
                }
                 else if (result3>result1&&result3>result2)
                {
                                 printf("%d",result3);
                }






                return 0;
}
