#include<stdio.h>
void main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    switch(num){
        case 1:
        printf("%d", 1*1*1);
        break;
        case 2:
        printf("%d", 2*2*2);
        break;
        case 3:
        printf("%d", 3*3*3);
        break;
        case 4:
        printf("%d", 4*4*4);
        break;
        case 5:
        printf("%d", 5*5*5);
        break;
        default :
        printf("illegal value");
        break;
    }
}