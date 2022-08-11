// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int a[10], i, s = 0;
    float A;
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        s = s + a[i];
    }
    A = s / 10.00;
    printf("Average of 10 numbers = %f", A);
    return 0;
}