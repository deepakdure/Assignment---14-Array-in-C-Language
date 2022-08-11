// 7. Write a program to find second largest in an array.Take array values from the user
#include <stdio.h>
void input(int[], int);
int result(int[], int);
int i;
int main()
{
    int n, a[20];
    printf("enter size of array = ");
    scanf("%d", &n);
    input(a, n);
    printf("Second Largest Number in This Array = %d", result(a, n));
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
    int L, S_L, t;
    for (i = 0; i < n; i++)
    {
        if (L < a[i])
        {
            S_L = L;
            L = a[i];
        }
        if (a[i] < L && S_L < a[i])
        {
            S_L = a[i];
        }
    }
    return S_L;
}
