//  profit or loss
#include<stdio.h>

int main()
{
    int cp, sp;
    //  cp -> cost price
    //  sp -> sale price 
    printf("Enter cost price : ");
    scanf("%d", &cp);
    printf("Enter sale price : ");
    scanf("%d", &sp);
    // checking for profit or loss
    if (sp > cp){
        printf("It is a profit");
    }
    else if (sp < cp){
        printf("It is a loss");
    }
    else{
        printf("It is not a loss or a profit ");
    }
    return 0;
}