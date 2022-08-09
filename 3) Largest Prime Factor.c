#include <stdio.h>

int find(long int number)
{
    int i = 2;
    while(i < number)
    {
        if(!(number % i))
        {
            number /= i;
            i = 2;
        }
        i += 1;
    }
}
int main() {
    printf("%d",find(600851475143));
}

