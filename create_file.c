#include<stdio.h>
void main()
{
    FILE *ft;
    char name[10];
    double balance;
    int account;
    ft=fopen("new.txt","w");
    if(ft==NULL)
    {
        printf("File could not be opened\n");
    }
    else
    {
        printf("Enter account, name and balance ");
        scanf("%d %s %lf", &account, &name, &balance);   
        fprintf(ft,"%d %s %lf",account,name,balance);
        fclose(ft);
    }
}