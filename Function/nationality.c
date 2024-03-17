#include<stdio.h>
void bangladesh();      /*If you call fuctions from end to the main function
 then you must declare it at the start */
int main()
{
    char option;         /*declaration of functions can be avoidanle if you declare 
    the functions before the main funtion */
    
    
    
scanf("%c",&option);
    if(option=='b')
    {
        bangladesh();
        
    }
    
    
    
    return 0;
    
    
    }


void bangladesh()
{
    printf("Bangladeshi");
}
