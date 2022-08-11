// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int x[10], i, s = 0;
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
        s = s + x[i];
    }
    printf("Sum of 10 Numbers = %d", s);
    return 0;
}