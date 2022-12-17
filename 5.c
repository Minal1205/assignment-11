#include <stdio.h>
// function to print first N prime numbers (TSRN)
int prime(int n)
{
    int flag;
    for (int i = 2; i < n; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    prime(num);

    return 0;
}