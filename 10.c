#include<stdio.h>
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

int series(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=fac(i)/i;}
        return sum;
    }

int main(){
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    printf("Sum of series is %d\n",series(num));
    
    return 0;
}