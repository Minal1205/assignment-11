#include <stdio.h>
// to print PASCAL Triangle. (TSRN)
int combination(int n, int r)
{
    int c = fac(n) / (fac(r) * fac(n - r));
    return c;
}

int fac(int num)
{
    int fact = 1;
    if (num == 0)
    {
        return 1;
    }
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int pascal(int n)
{
    int j, r;
    for (j = 0; j <= n; j++)
    {
        for (r = 0; r <= j; r++)
        {
            printf("%d ", combination(j, r));
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    pascal(n);

    return 0;
}