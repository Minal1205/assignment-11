#include <stdio.h>
int fibonacci(int num)
{

    int a = 0, b = 1, c;
    printf("Fibonacci series till %d numbers\n", num);
    printf("%d %d ", a, b);
    for (int i = 2; i < num; i++)
    {

        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}

int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}