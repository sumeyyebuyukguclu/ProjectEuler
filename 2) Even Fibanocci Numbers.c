#include <stdio.h>

int main()
{
    int first = 1;
    int second = 2;
    int sum = 0;
    int num = first + second;

    while(num < 4000000)
    {
        if(num % 2 == 0)
            sum += num;
        first = second;
        second = num;
        num = first + second;
    }
    printf("%d",sum + 2);
} 