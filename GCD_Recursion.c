#include<stdio.h>
int gcd(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

void main()
{
    int a = 24, b =18;
    printf("%d %d %d",a,b,gcd(a,b));
}