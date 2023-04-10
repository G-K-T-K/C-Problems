#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter values of a and b : ");
    scanf("%d %d",&a,&b);

    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    printf("GCD is %d",a);
}