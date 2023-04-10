#include<stdio.h>
void main(){
    int f0,f1,f,n;
    printf("Enter the no. of terms : ");
    scanf("%d", &n);
    f0=0;
    f1=1;
    printf("%d %d ",f0,f1);
    for(int i=1;i<=n;i++){
        f=f0+f1;
        f0=f1;
        f1=f;
        printf("%d ",f);
    }
}