#include<stdio.h>
int main(){
int line;
printf("Enter the line: ");
scanf("%d",&line);
for(int row=1;row<=line;row++){
    for (int spa=1;spa<=line-row;spa++)
        printf(" ");
        for(int star=1;star<=2*row-1;star++)
        printf("*");
        printf("\n");}

for(int row=line-1;row>0;row--){
    for(int spa=1;spa<=line-row;spa++)
    printf(" ");
    for(int star=1;star<=2*row-1;star++)
    printf("*");
    printf("\n");
}


    






    return 0;
}