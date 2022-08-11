// 6. Write a program to sort elements of an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int a[10], i, j, k;
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
    printf("after sorting array is = ");
    for (j = 0; j < 10; j++)
        printf("%d ", a[j]);
}