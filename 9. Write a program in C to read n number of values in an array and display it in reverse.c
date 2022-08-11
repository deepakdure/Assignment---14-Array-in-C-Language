// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user
#include <stdio.h>
int main()
{
    int n, a[100], i, r;
    printf("enter a size of array = ");
    scanf("%d", &n);
    printf("enter %d array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        r = a[n - i - 1];
        a[n - i - 1] = a[i];
        a[i] = r;
    }
    printf("After reverse array is = ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}