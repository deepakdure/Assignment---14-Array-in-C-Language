// 5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int a[10], i;
    printf("enter 10 numbers\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < a[0])
            a[0] = a[i];
    }
    printf("Smallest Number in This Array = %d", a[0]);
    return 0;
}