#include <stdio.h>
#include <math.h>
// to find the square of any number using the function.

int square(int n)
{
    return pow(n, 2);
}

int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}