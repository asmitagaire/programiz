#include<stdio.h>
int main()
{
    int num, count, sum = 0;
    
    printf("input a positive number:");
    scanf("%d" , &num);

    //for loop terminates when num is less than count
    for (count = 1; count <=num; count++)
    {
        sum+= count;

    }
    printf("sum= %d", sum);

    return 0;
}