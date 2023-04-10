#include <stdio.h>

int main()
{
    int a[10], n, i, small, large;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    small = a[0]; // 1
    large = a[0]; // 1
    // 1 3 2 
    for (i=0; i<n; i++)
    {
        if (a[i] < small) small = a[i];
        if (a[i] > large) large = a[i];
    }

    printf("Smallest: %d", small);
    printf("\nLargest: %d", large);

    return 0;
}