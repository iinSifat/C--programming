#include<stdio.h>
int main()
{
    int input,rem,temp;
    printf("Enter a number:");
    scanf("%d",&input);

    int frequency_0=0,frequency_1=0,frequency_2=0,frequency_3=0,frequency_4=0,frequency_5=0;
    int frequency_6=0,frequency_7=0,frequency_8=0,frequency_9=0;


        temp=input;

    while(temp!=0)
    {
        rem=temp%10;
        {
            switch(rem)
            {
            case 0:
                frequency_0++;
                break;
            case 1:
                frequency_1++;
                break;

            case 2:
                frequency_2++;
                break;
            case 3:
                frequency_3++;
                break;
            case 4:
                frequency_4++;
                break;
            case 5:
                frequency_5++;
                break;
            case 6:
                frequency_6++;
                break;
            case 7:
                frequency_7++;
                break;
            case 8:
                frequency_8++;
                break;
            case 9:
                frequency_9++;
                break;


        }
            temp=temp/10;

        }
    }
    if(frequency_0!=0)
    {
        printf("The number has 0 =%d times\n",frequency_0);
    }
    if(frequency_1!=0)
    {
        printf("The number has 1 =%d times\n",frequency_1);
    }
    if(frequency_2!=0)
    {
        printf("The number has 2 =%d times\n",frequency_2);
    }
    if(frequency_3!=0)
    {
        printf("The number has 3 =%d times\n",frequency_3);
    }
    if(frequency_4!=0)
    {
        printf("The number has 4 =%d times\n",frequency_4);
    }
    if(frequency_5!=0)
    {
        printf("The number has 5 =%d times\n",frequency_5);
    }
    if(frequency_6!=0)
    {
        printf("The number has 6 =%d times\n",frequency_6);
    }
    if(frequency_7!=0)
    {
        printf("The number has 7 =%d times\n",frequency_7);
    }
    if(frequency_8!=0)
    {
        printf("The number has 8 =%d times\n",frequency_8);
    }
    if(frequency_9!=0)
    {
        printf("The number has 9 =%d times",frequency_9);
    }



    return 0;
}
