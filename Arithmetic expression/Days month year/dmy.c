#include <stdio.h>
int main ()
{
            int d,m,y,w,d_m_y;
            printf("Enter the total days:");
            scanf("%d",&d);

            y=d/365;
            m=(d%365)/30;
            w=((d%365)%30)/7;
            d_m_y=((d%365)%30)%7;
            printf("%d years %d months %d weeeks %d days",y,m,w,d_m_y);


            return 0;
}
