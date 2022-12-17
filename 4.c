#include <stdio.h>
//to find the next prime number of a given number. (TSRS)
int prime(int n)
{
    int flag;
    for (int i = n + 1; i>0 ; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
            break;
        }
    }
}

int main()
{
    int num, i, flag;
    printf("Enter Number\n");
    scanf("%d", &num);
    int c = prime(num);
    printf("Next prime number is %d", c);

    return 0;
}