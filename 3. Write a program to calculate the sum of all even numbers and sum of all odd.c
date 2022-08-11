// 3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10
#include <stdio.h>
int main()
{
    int so = 0, se = 0, i, a[10];
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2)
        {
            so = so + a[i];
        }
        else
            se = se + a[i];
    }
    printf("Sum of all Even Numbers = %d", se);
    printf("\nSum of all Odd Numbers = %d", so);
    return 0;
}