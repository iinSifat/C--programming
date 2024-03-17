#include<stdio.h>
int main ()
{
    int player1guess,player2guess,chances=5,flag=0;
    printf("Enter the guess player 1:");
    scanf("%d",&player1guess);
    while(chances>0)
    {
        printf("Enter your gueses player-2:");
        scanf("%d",&player2guess);
        if(player2guess==player1guess)
        {
            printf("You are safe");
          
            break;

        }
        else
        {
            chances--;
            if(chances>0)
            {
                printf("You are onr step closer to death\n%d chances left\n",chances);
                
            }
            
            }
            
        }
    if(chances==0)
    {
        printf("You are death");
    }
    
   

    return 0;
}