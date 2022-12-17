#include <stdio.h>
// to print all Prime numbers between two given numbers. (TSRN)
int prime(int a, int b)
{
    int flag;
    for (int i = a + 1; i < b; i++)
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
    int x, y;
    printf("Enter Two Numbers to print prime numbers between them\n");
    scanf("%d %d", &x, &y);
    prime(x, y);

    return 0;
}