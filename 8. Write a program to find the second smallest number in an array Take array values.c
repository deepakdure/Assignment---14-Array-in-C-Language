// 8. Write a program to find the second smallest number in an array.Take array values from the user
#include <stdio.h>
#include <limits.h>
void input(int[], int);
int result(int[], int);
int i;
int main()
{
    int n, a[20];
    printf("enter size of array = ");
    scanf("%d", &n);
    input(a, n);
    printf("Second Smallest Number in This Array = %d", result(a, n));
    return 0;
}
void input(int a[], int n)
{
    printf("enter %d values of array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int result(int a[], int n)
{
    int S_Small = INT_MAX - 1, Min = INT_MAX;
    for (i = 0; i < n; i++)
    {

        if (Min > a[i])
        {
            S_Small = Min;
            Min = a[i];
        }
        if (S_Small > a[i] && a[i] != Min)
        {

            S_Small = a[i];
        }
    }

    return S_Small;
}
