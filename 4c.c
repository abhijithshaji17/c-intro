// using switchcases to make a menu 
#include<stdio.h>
int main()
{
    printf("entha mwoney vendeyyy??\nente estam:");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("mandhi madhi alle?");
            break;
        case 2:
            printf("oru biriyani please?");
            break;
        case 3:
            printf("porotta please!");
            break;
        default:
            printf("eda potta enter a valid number!!");
    }
    return 0;
}