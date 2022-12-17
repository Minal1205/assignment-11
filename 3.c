#include <stdio.h>
// function to check whether a given number is Prime or not. (TSRS)
int prime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
        return flag;
    }
}
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    if (num == 2)
    {
        prime("Number is prime\n");
    }
    int p = prime(num);
    if (p == 1)
        printf("Number is not prime\n");
    else
        printf("Number is prime\n");

    return 0;
}