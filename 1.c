#include <stdio.h>
// function to calculate LCM of two numbers.
int lcm(int x, int y)
{
    int i = 2, c = 0;
    for (i; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b;
    printf("Enter Two Number to Find Their LCM\n");
    scanf("%d %d", &a, &b);
    int k = lcm(a, b);
    printf("LCM of %d and %d is %d\n", a, b, k);

    return 0;
}