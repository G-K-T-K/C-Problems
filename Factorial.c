//  find the factorial
#include<stdio.h>

int main(){
    int n, fact = 1,n1 ;
    
    printf("enter number  : ");
    scanf("%d",&n);
    // for (int i=1 ; i <= n ;i++){
    //     fact *= i;
    // }
    n1=n;
    while(n>0){
        fact*=n;
        n -= 1;
        }
    printf("the factorial of %d is %d",n1, fact);
    
    return 0;
}