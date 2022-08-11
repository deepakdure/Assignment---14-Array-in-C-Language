// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user
#include <stdio.h>
int main()
{
    int a[100], b[100], i, n;
    printf("enter size of array = ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    printf("Copy array is = ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}