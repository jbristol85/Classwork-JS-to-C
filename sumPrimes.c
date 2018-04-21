
 #include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

bool isPrime(num)
{
    for(int n = 2; n < num; n++)
    {
        if(num % n == 0)
        {
            return false;
        }
    }
    return true;
}

int sumPrimes(num)
{
    int total = 2;
    for(int i = 3; i <= num; i++)
    {
        if(isPrime(i))
        {
            total += i;
        }
    }
    return total;
}

int main(int argc, string argv[])
{

    int number = 0;
     if (argc == 2)  // checking for 2 arguments
    {
        number = atoi(argv[1]);
    }
    else
    {
        printf("Please enter a number\n");
    }



    printf("%i\n", sumPrimes(number));
}
