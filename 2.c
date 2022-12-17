#include <stdio.h>
// function to calculate HCF of two numbers
// HCF=(First num x Second num)/LCM
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
    printf("Enter Two Number to Find Their HCF\n");
    scanf("%d %d", &a, &b);
    int LCM = lcm(a, b);
    int HCF = (a * b) / LCM;
    printf("HCF=%d", HCF);

    return 0;
}