#include <stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf ("%d", &num);
    
    if(num > 0){
        printf("\nnumber is +ve");
    }
    else if(num == 0){
        printf("\n 0 is neither of 'em");
    }  
    else{
        printf("\nnumber is -ve");
    }
}