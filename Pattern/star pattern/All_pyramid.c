#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the total numbers of rows:");
    scanf("%d",&row);
    printf("Right angle half pyramid:\n");
    for ( int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("*");
           
        }
         printf("\n");
    }
    printf("Right angle inverted half pyramid:\n");
    for ( int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("*");
           
        }
         printf("\n");
    }
    printf("Left angle half pyramid:\n");
    //half left angle pyramid
        for ( int i=1;i<=row;i++){
        for(int j=1;j<=(row-i);j++){
            printf(" ");}
            for(int j=1;j<=i;j++){
            
            printf("*");}
            printf("\n");
        }
    printf("Left angle inverted half pyramid:\n");
        for(int i=row;i>=1;i--){
            for(int j=1;j<=(row-i);j++){
            printf(" ");}
            for(int j=1;j<=i;j++){
            
            printf("*");}
            printf("\n");
        }
        
    printf("Right angle hollow pyramid:\n");
         for ( int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
           if(i==1||i==row||j==1||j==i)
            printf("*");
            else printf(" ");
           
        }
         printf("\n");
    }

    printf("Right angle inverted hollow pyramid:\n");
         for ( int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
           if(i==1||i==row||j==1||j==i)
            printf("*");
            else printf(" ");
           
        }
         printf("\n");
    }
    printf("Left angle hollow pyramid:\n");
    for(int i=1;i<=row;i++){
        for(int j=row-i;j>=1;j--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i==1||i==row||j==1||j==i)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }   
    printf("Left angle inverted hollow pyramid:\n");
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=row-i;j++){
            printf(" ");

        }
        for(int j=1;j<=i;j++){
            if(i==row||i==1||j==1||j==i)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
printf("Half diamond 1,2,3:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

 }
    for(int i=row-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
printf("ABCD shape:\n");
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    for(int i=2;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    //Ct-2 SPL theory question
    printf("Solution of a CT-2 question:\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(j==i)
            printf("%d",i);
            else
            printf(" ");
        }
        printf("\n");
    }
    
    printf("Another one\n");
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++)
            printf(" ");
            for(int j=1;j<=i;j++){
           if(j==1)
            printf("*");
            else
            printf(" ");
       
        for(int j=1;j<=i;j++){
            if(j==i)
            printf("*");
            else
            printf(" ");
        }    
          
        }
        printf("\n");
    }
    
    
    
    
    
    
  
  
  
    if(row%2 == 1){
for(int i = row; i>0; i--) {
for(int j = 1; j<i; j++) 
printf(" ");
printf("*\n");
} }
else{
for(int i = row; i>0; i--) {
for(int j = 1; j<=i; j++)printf("*");
printf(" \n"); }}

printf("Solution:\n");
for (int i=row;i>0;i--){
    for(int j=i;j>0;j--){
        printf("%d",2*j);
    }
    printf("\n");
}
printf("Mid:\n");
for (int i=1;i<=row;i++){
    for(int    spa=1;spa<=row-i;spa++)
    printf(" ");
    for(int j=    1;j<=row+1;j++)
    printf("*");
    printf("\n");  
}

    return 0;
}